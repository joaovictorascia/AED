#include <iostream>

using namespace std;

int main() {
    int vetor[10];
    int i = 0;
    int j = 0;

    while (i < 10) {
        vetor[i] = i;        
        i++;
    }

    while (j < 10)
    {
        cout << vetor[j] << endl;
        j++;
    }
    

    return 0;
}