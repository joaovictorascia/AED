#include <iostream>

using namespace std;

class Paciente {
    private:
        string nome, telefone, tipoSanguineo, idade;
    public:

        string getNome() {
            return this->nome;
        }

        string getTelefone() {
            return this->telefone;
        }

        string getTipoSanguineo() {
            return this->tipoSanguineo;
        }

        string getIdade() {
            return this->idade;
        }


        void setNome(string nome) {
            this->nome = nome;
        }

        void setTelefone(string telefone) {
            this->telefone = telefone;
        }

        void setTipoSanguineo(string tipoSanguineo) {
            this->tipoSanguineo = tipoSanguineo;
        }

        void setIdade(string idade) {
            this->idade = idade;
        }


        void exibirInformacoes() {
            cout << this->nome << endl;
            cout << this->telefone << endl;
            cout << this->tipoSanguineo << endl;
            cout << this->idade << endl;
        }
};

int main() {
    int qtdd;
    int counter = 0;
    string tempName, tempTelefone, tempTipoSanguineo, tempIdade;


    cout << "Insira a quantidade de pacientes a serem cadastrados" << endl;
    cin >> qtdd;

    Paciente pacientes[qtdd];

    for (int i = 0; i < qtdd; i++)
    {
        cout << "Insira o nome, telefone, tipoSanguineo, idade do paciente SEPARADO por espaços." << endl;
        cin >> tempName >> tempTelefone >> tempTipoSanguineo >> tempIdade;
        pacientes[i].setNome(tempName);
        pacientes[i].setTelefone(tempTelefone);
        pacientes[i].setTipoSanguineo(tempTipoSanguineo);
        pacientes[i].setIdade(tempIdade);
    }

    cout << "Sao doadores universais:" << endl;

    for (int j = 0; j < qtdd; j++)
    {
        if (pacientes[j].getTipoSanguineo() == "o") {
            counter++;
        }
    }

    Paciente doadoresUniversais[counter];

    for (int j = 0; j < qtdd; j++)
    {
        if (pacientes[j].getTipoSanguineo() == "o") {
            doadoresUniversais[j] = pacientes[j];
        }
    }

    for (int l = 0; l < counter; l++)
    {
        cout << pacientes[l].getNome() << " " << pacientes[l].getTelefone() << " " << pacientes[l].getTipoSanguineo() << " " << pacientes[l].getIdade() << endl;
    }    
    
    


    return 0;
}