#include <iostream>

using namespace std;

int pesqbinaria(int vetor[], int tamanhoVetor, int valorProcurado) {
    int inicio = 0;
    int fim = tamanhoVetor - 1;

    while (inicio <= fim) {
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

int main() {
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int posicao = pesqbinaria(vetor, 10, 5);

    if (posicao != -1) {
        cout << "O valor 5 foi encontrado na posição " << posicao << " do vetor." << endl;
    } else {
        cout << "O valor 5 não foi encontrado no vetor." << endl;
    }

    return 0;
}
