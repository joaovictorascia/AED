#include <iostream>

using namespace std;

int pesqseq(int vetor[], int tamanhoVetor, int valorProcurado, int &numComparacoes) {
    numComparacoes = 0;
    for (int i = 0; i < tamanhoVetor; i++) {
        numComparacoes++;
        if (vetor[i] == valorProcurado) {
            return i;
        }
    }
    return -1;
}

int pesqbinaria(int vetor[], int tamanhoVetor, int valorProcurado, int &numComparacoes) {
    numComparacoes = 0;
    int inicio = 0;
    int fim = tamanhoVetor - 1;

    while (inicio <= fim) {
        numComparacoes++;
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valorProcurado) {
            return meio;
        } else if (vetor[meio] < valorProcurado) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int pesqsentinela(int vetor[], int tamanhoVetor, int valorProcurado, int &numComparacoes) {
    numComparacoes = 0;
    int ultimo = vetor[tamanhoVetor - 1];
    vetor[tamanhoVetor - 1] = valorProcurado;

    int i = 0;
    while (vetor[i] != valorProcurado) {
        numComparacoes++;
        i++;
    }

    vetor[tamanhoVetor - 1] = ultimo;

    if (i < tamanhoVetor - 1 || vetor[tamanhoVetor - 1] == valorProcurado) {
        return i;
    } else {
        return -1;
    }
}

int main() {
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int valorProcurado = 5;
    int numComparacoesSeq, numComparacoesBin, numComparacoesSent;

    int posicaoSeq = pesqseq(vetor, 10, valorProcurado, numComparacoesSeq);

    int posicaoBin = pesqbinaria(vetor, 10, valorProcurado, numComparacoesBin);

    int posicaoSent = pesqsentinela(vetor, 10, valorProcurado, numComparacoesSent);

    
    cout << "Pesquisa Sequencial: " << endl;
    cout << "Posicao encontrada: " << posicaoSeq << endl;
    cout << "Numero de comparacoes: " << numComparacoesSeq << endl;

    cout << "\nPesquisa Binaria: " << endl;
    cout << "Posicao encontrada: " << posicaoBin << endl;
    cout << "Numero de comparacoes: " << numComparacoesBin << endl;

    cout << "\nPesquisa com Sentinela: " << endl;
    cout << "Posicao encontrada: " << posicaoSent << endl;
    cout << "Numero de comparacoes: " << numComparacoesSent << endl;

    return 0;
}
