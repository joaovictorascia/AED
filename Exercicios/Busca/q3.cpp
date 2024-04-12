#include <iostream>

using namespace std;

int pesqseq(int vetor[], int tamanhoVetor, int valorProcurado) {
    int i = 0;

    while (i < tamanhoVetor)
    {
        if (vetor[i] == valorProcurado) {
            return i;
        }
        i++; // Incremento para avançar para o próximo elemento do vetor
    }
    
    return -1;
}

int main() {
    int vetor[10] = {0, 2, 1, 3, 5, 4, 8, 6, 7, 10};
    int i = 0;
    int j = 0;

    int novoVetor = pesqseq(vetor, 10, 2);

    cout << novoVetor;
    

    return 0;
}
