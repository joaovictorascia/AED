#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <climits>

using namespace std;

// Algoritmo Dijkstra funciona apenas com distâncias positivas

class Package // Classe Package que representa um pacote com identificação, dados, nodos recebidos e enviados
{
public:
    char identificacao;
    int data;
    std::vector<char> receivedFrom; // Para armazenar de quais nodos ele já recebeu
    std::vector<char> deliveredTo; // Para armazenar quais nodos ela já enviou dados

    // Construtor inicialmente nulo
    Package() : identificacao('\0'), data(0), receivedFrom(), deliveredTo() {}

    // Parameterized constructor with member initializer list
    Package(char id, int data) : identificacao(id), data(data), receivedFrom(), deliveredTo() {}

    // Operador de comparação
    bool operator==(const Package &other) const
    {
        return identificacao == other.identificacao;
    }
};

class HashTable // Classe HashTable que representa a tabela hash de pacotes
{
private:
    unordered_map<char, Package> table; // Tabela hash que mapeia caracteres para pacotes

public:   
    void insert(const Package &pkg) // Função para inserir um pacote na tabela hash
    {
        table[pkg.identificacao] = pkg; // Armazena o pacote a ser enviado
    }

    void insertAt(char from, char to, int data, int op) // Função para inserir dados em um pacote existente na tabela hash
    {
        auto it = table.find(to); // Acha o pacote para qual se deseja enviar dados
        if (it != table.end())
        {
            if (op == 0)
            {
                it->second.data = it->second.data + data; // Atualiza os dados desse pacote
                it->second.receivedFrom.push_back(from); // Atualiza vetor que mostra de quais nodos ele já recebeu dados
            }
            else if (op == 1) // Essa operação apenas pega o nodo de envio e atualiza o campo dos Nodos aos quais ele já enviou dados
            {
                auto it = table.find(from); // Encontra o pacote de origem na tabela hash 
                if (it != table.end()) it->second.deliveredTo.push_back(to); // Adiciona o nodo de destino ao vetor de nodos enviados
                }
                else cout << "Aconteceu um erro tente novamente!" << endl;
            }
        }
        else //Tratamento de erro.
        {
            cout << "Pacote com especificado não foi encontrado." << endl;
        }
    }

    void display() const // Essa função imprime todos os nodos com suas respectivas informações, id, enviados, recebidos e dados contidos
    {
        for (const auto &pair : table)
        {
            cout << "ID: " << pair.first << ", Data: " << pair.second.data << ", Recebeu: ";

            for (const auto &from : pair.second.receivedFrom)
            {
                cout << from << " ";
            }

            cout << ", Enviou: ";

            for (const auto &to : pair.second.deliveredTo)
            {
                cout << to << " ";
            }

            cout << "\n";
        }
    }
};

int distanciaMinima(int distancia[], bool foiVisitado[], int nNodes)
{
    int minimo = INT_MAX, index = -1;

    for (int k = 0; k < nNodes; k++)
    {
        if (foiVisitado[k] == false && distancia[k] <= minimo) // Se esse node ainda não foi verificado
        {
            minimo = distancia[k]; // minimo passa a ter o valor da distancia
            index = k;
        }
    }
    return index; // Retornamos esse índice para saber em que índice estamos na função DijkstraAlgo
}

void printPath(int parent[], int j)
{
    if (parent[j] == -1)
        return;

    printPath(parent, parent[j]);
    cout << " -> " << char(j + 65);
}

void DijkstraAlgo(int **graph, int src, int nNodes)
{
    int distancia[nNodes];    // para computar a distância entre cada vértice
    bool foiVisitado[nNodes]; // Verificar se o vértice já foi visitado ou não
    int parent[nNodes]; // array to store the shortest path tree

    // Antes de incializar, marquei todos os vetores com distância infinita
    //  e os marquei como não visitados em
    for (int k = 0; k < nNodes; k++)
    {
        distancia[k] = INT_MAX;
        foiVisitado[k] = false;
        parent[k] = -1;
    }

    distancia[src] = 0; // A distancia do vertice de origem é 0

    for (int k = 0; k < nNodes - 1; k++) // Iterate nNodes - 1 times
    {
        int m = distanciaMinima(distancia, foiVisitado, nNodes); // Vertice atualmente selecionado
        if (m == -1) break; // If no vertex is found, break the loop
        foiVisitado[m] = true;                                   // Marca esse vértice como verificado.

        for (int k = 0; k < nNodes; k++)
        {
            // Apenas uma longa verificação para saber se:
            // O bit não foi visitado
            // Se existe uma aresta entre 2 vertices, exemplo A e B ou C e D
            // e que a distância já foi computada
            // verifica se a distancia do vertice M somado a um vertice K é menor do que a distancia conhecida anteriormente

            if (!foiVisitado[k] && graph[m][k] && distancia[m] != INT_MAX && distancia[m] + graph[m][k] < distancia[k])
            {
                distancia[k] = distancia[m] + graph[m][k];
                parent[k] = m;
            }
        }
    }

    cout << "Nodo\t\tCaminho" << endl;
    for(int k = 0; k < nNodes; k++)
    {
        if (k != src) 
        {
            char str = 65 + k;  // A letra A na tabela ascii é 65 se somarmos esses valores conseguimos as próximas letras
            cout << char(src + 65) << " -> " << str << "\t\t";
            cout << char(src + 65);
            if (parent[k] != -1)
                printPath(parent, k); // Imprime o caminho que deve ser realizado
            cout << endl;
        }
    }
}

void addNode(int **&graph, int &nNodes) {
    // P/ criar grafo maior
    int newSize = nNodes + 1;
    int **newGraph = new int *[newSize];
    for (int i = 0; i < newSize; ++i) {
        newGraph[i] = new int[newSize];
        // Iniciliza novo grafo, assumindo tudo com zero inicialmente
        for (int j = 0; j < newSize; ++j) {
            newGraph[i][j] = 0;
        }
    }

    // Copy old values to new graph
    for (int i = 0; i < nNodes; ++i) {
        for (int j = 0; j < nNodes; ++j) {
            newGraph[i][j] = graph[i][j];
        }
    }

    char newNodeChar = 'A' + nNodes;
    cout << "Preencha as conexões para o novo no " << newNodeChar << ":\n";
    for (int i = 0; i < nNodes; ++i) {
        char nodeChar = 'A' + i;
        cout << "Distancia de " << nodeChar << " para " << newNodeChar << ": ";
        cin >> newGraph[i][newSize - 1]; // Preenche a ultima linha
        cout << "Distance de " << newNodeChar << " para " << nodeChar << ": ";
        cin >> newGraph[newSize - 1][i]; // Preenche a última coluna
    }

    // Desaloca memória do grafo anterior
    for (int i = 0; i < nNodes; ++i) {
        delete[] graph[i];
    }
    delete[] graph;

    // Atualiza para novo graafo
    graph = newGraph;
    nNodes = newSize;
}

int main()
{
    int nNodes;
    char fromNode;
    char toNode;
    int op;
    int bitsToSend;
    HashTable tabelaDeRoteamento;

    std::cout << R"(
 __      _____________ ___________________            ___________           
/  \    /  \_   _____//   _____/\______   \ ____  __ _\__    ___/__________ 
\   \/\/   /|    __)_ \_____  \  |       _//  _ \|  |  \|    |_/ __ \_  __ \
 \        / |        \/        \ |    |   (  <_> )  |  /|    |\  ___/|  | \/
  \__/\  / /_______  /_______  / |____|_  /\____/|____/ |____| \___  >__|   
       \/          \/        \/         \/                         \/       
)" << std::endl;

    cout << "Insira a quantidade de nos: " << endl;
    cin >> nNodes;

    // Alocação dinâmica para poder passar array de duas dimensões para a função
    int **graph = new int *[nNodes];
    for (int i = 0; i < nNodes; i++)
    {
        graph[i] = new int[nNodes];
    }

    // Aqui é preenchida a matriz de adjacência
    for (int i = 0; i < nNodes; i++)
    {
        char line = 65 + i;
        tabelaDeRoteamento.insert(Package(line, 0));
        for (int j = 0; j < nNodes; j++)
        {
            char column = 65 + j;
            cout << "A distancia entre " << line << " -> " << column << ": ";
            cin >> graph[i][j];
        }
    }

    while (true)
    {
        std::cout << R"(
+---+----------------------------------+
|   |              MENU                |
+---+----------------------------------+
|   |                                  | 
|   |                                  | 
| 1 | Enviar pacote                    |
| 2 | Adicionar no                     |
| 3 | Contabilizar distancia entre nos |
| 4 | Finalizar                        |
|   |                                  |
|   |                                  |
|   |                                  |
+---+----------------------------------+
)" << std::endl;
        cout << "Opcao: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Qual o no de origem?: " << endl;
            cin >> fromNode;
            cout << "Deseja enviar um pacote para qual no?: " << endl;
            cin >> toNode;
            cout << "Quantos bits deseja enviar? " << endl;
            cin >> bitsToSend;
            if (toNode < 'A' || toNode >= 'A' + nNodes)
            {
                cout << "Opcao invalida" << endl;
            }
            else
            {
                int i = toNode - 'A';
                cout << "A letra " << toNode << " corresponde ao no " << i << "." << endl;
                // Quando eu for enviar eu preciso qual letra de origem e qual a letra de destino
                // os op codes 0 e 1 informam se é pra atualizar as informações do bit de origem ou destino.
                tabelaDeRoteamento.insertAt(fromNode, toNode, bitsToSend, 0);
                tabelaDeRoteamento.insertAt(fromNode, toNode, bitsToSend, 1);
                tabelaDeRoteamento.display();
            }
            break;
        case 2:
            addNode(graph, nNodes);
            cout << "No adicionado com sucesso! Novo tamanho do grafo: " << nNodes << "x" << nNodes << endl;
            break;
        case 3:
            cout << "Deseja partir de qual no?: " << endl;
            cin >> fromNode;

            // Checa se a letra inserida é válida e se corresponde à algum nó
            if (fromNode < 'A' || fromNode >= 'A' + nNodes)
            {
                cout << "Opcao invalida" << endl;
            }
            else
            {
                int i = fromNode - 'A';
                cout << "A letra " << fromNode << " corresponde ao no " << i << "." << endl;

                DijkstraAlgo(graph, i, nNodes);
            }
            break;
        case 4:
            cout << "Obrigado pela preferencia!" << endl;

            // Desaloca memória utiliza pelo programa
            for (int i = 0; i < nNodes; i++)
            {
                delete[] graph[i];
            }
            delete[] graph;

            return 0;
        default:
            cout << "Opcao invalida!" << endl;
            break;
        }
    }

    return 0;
}
