#include <iostream>

using namespace std;

class Carro {
    private:
        string nome, telefone, marca, placa, cor;
    public:

        string getNome() {
            return this->nome;
        }

        string getTelefone() {
            return this->telefone;
        }

        string getMarca() {
            return this->marca;
        }

        string getPlaca() {
            return this->placa;
        }

        string getCor() {
            return this->cor;
        }


        void setNome(string nome) {
            this->nome = nome;
        }

        void setTelefone(string telefone) {
            this->telefone = telefone;
        }

        void setMarca(string marca) {
            this->marca = marca;
        }

        void setPlaca(string placa) {
            this->placa = placa;
        }

        void setCor(string cor) {
            this->cor = cor;
        }


        void exibirInformacoes() {
            cout << this->nome << endl;
            cout << this->telefone << endl;
            cout << this->marca << endl;
            cout << this->placa << endl;
            cout << this->cor << endl;
        }
};

int main() {
    int qtdd;
    string tempName, tempTelefone, tempMarca, tempPlaca, tempCor;

    cout << "Insira a quantidade de veículos a serem cadastrados" << endl;
    cin >> qtdd;

    Carro carros[qtdd];

    for (int i = 0; i < qtdd; i++)
    {
        cout << "Insira o nome, telefone, marca, placa e cor do veículo SEPARADO por espaços." << endl;
        cin >> tempName >> tempTelefone >> tempMarca >> tempPlaca >> tempCor;
        carros[i].setNome(tempName);
        carros[i].setTelefone(tempTelefone);
        carros[i].setMarca(tempMarca);
        carros[i].setPlaca(tempPlaca);
        carros[i].setCor(tempCor);
    }

    for (int i = 0; i < qtdd; i++)
    {
        cout << carros[i].getNome() << " " << carros[i].getTelefone() << " " << carros[i].getMarca() << " " << carros[i].getPlaca() << " " << carros[i].getCor() << endl;
    }
    
    


    return 0;
}
