#include <iostream>

using namespace std;

int questaoSete(int n) {
    int vetor[n];
    int i = 0;
    int maiorValor;

    
    while (i < n) {
        vetor[i] = i;
        i++;
    }

    
    maiorValor = vetor[0];

    
    for (i = 1; i < n; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
    }

    return maiorValor;
}

int main() {
    int val = questaoSete(10);

    cout << val << endl;

    return 0;
}
