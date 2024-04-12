#include <iostream>

using namespace std;

int pesqsentinela(int vetor[], int tamanhoVetor, int valorProcurado) {
    int ultimo = vetor[tamanhoVetor - 1];
    vetor[tamanhoVetor - 1] = valorProcurado;

    int i = 0;
    while (vetor[i] != valorProcurado) {
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

    int posicao = pesqsentinela(vetor, 10, 5);

    if (posicao != -1) {
        cout << "O valor 5 foi encontrado na posição " << posicao << " do vetor." << endl;
    } else {
        cout << "O valor 5 não foi encontrado no vetor." << endl;
    }

    return 0;
}
