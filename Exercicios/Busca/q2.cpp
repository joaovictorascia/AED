#include <iostream>

using namespace std;

int *ordernar(int vetor[], int tamanhoVetor) {
    int *tempVector = new int[tamanhoVetor]; // Alocar memória dinamicamente para tempVector
    int i = 0;

    while (i < tamanhoVetor)
    {
        if (i < tamanhoVetor - 1 && vetor[i] < vetor[i+1]) {
            tempVector[i] = vetor[i];
        } else {
            tempVector[i] = vetor[i];
        }
        i++;
    }
    
    return tempVector;
}

int main() {
    int vetor[10] = {0, 2, 1, 3, 5, 4, 8, 6, 7, 10};
    int i = 0;
    int j = 0;

    int *novoVetor = ordernar(vetor, 10);

    while (j < 10)
    {
        cout << novoVetor[j] << endl;
        j++;
    }
    
    delete[] novoVetor; // Liberar a memória alocada dinamicamente

    return 0;
}
