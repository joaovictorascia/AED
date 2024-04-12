#include <iostream>

using namespace std;

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
    int j = 10;

    while (i < 10) {
        cout << "Insira um valor para a posicao " << i << endl;
        cin >> vetor[i];
        i++;
    }

    int *novoVetor = ordernar(vetor, 10);

    while (j > 0)
    {
        cout << novoVetor[j] << endl;
        j++;
    }
    
    delete[] novoVetor;

    return 0;
}
