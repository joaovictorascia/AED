// Escolhi neste código a Busca Sequencial devido: a ordem dos elementos não importar e a posição exata do valor ser desconhecida.


#include <iostream>

using namespace std;

int buscaSequencial(int vetor[], int tamanhoVetor, int valorProcurado) {
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] == valorProcurado) {
            return i;
        }
    }
    return -1;
}

int *ordernar(int vetor[], int tamanhoVetor) {
    int *tempVector = new int[tamanhoVetor];
    int i = 0;

    while (i < tamanhoVetor)
    {
        if (i < tamanhoVetor - 1 && vetor[i] < vetor[i+1]) {
            tempVector[i] = vetor[i+1];
        } else {
            tempVector[i] = vetor[i];
        }
        i++;
    }
    
    return tempVector;
}

int main() {
    int vetor[10];
    int i = 0;

    while (i < 10) {
        cout << "Insira um valor para a posicao " << i << endl;
        cin >> vetor[i];
        i++;
    }

    int *novoVetor = ordernar(vetor, 10);

    int valorProcurado;
    cout << "Insira o valor a ser procurado: ";
    cin >> valorProcurado;

    int posicao = buscaSequencial(novoVetor, 10, valorProcurado);

    if (posicao != -1) {
        cout << "O valor " << valorProcurado << " foi encontrado na posicao " << posicao << "." << endl;
    } else {
        cout << "O valor " << valorProcurado << " nao foi encontrado." << endl;
    }
    
    delete[] novoVetor;

    return 0;
}
