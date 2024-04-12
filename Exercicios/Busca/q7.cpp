#include <iostream>

using namespace std;

int questaoSete(int n) {
    int vetor[n];
    int i = 0;
    int menorValor;

    while (i < n) {
        vetor[i] = i;
        i++;
    }

    menorValor = vetor[0];

    
    for (i = 1; i < n; i++) {
        if (vetor[i] < menorValor) {
            menorValor = vetor[i];
        }
    }

    return menorValor;
}

int main() {
    int val = questaoSete(10); // Passar um argumento para n

    cout << val << endl;

    return 0;
}
