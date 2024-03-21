#include <iostream>

using namespace std;

// Utilizei como referencia a agenda telefônica de um dispositivo IOS
class AgendaTelefonica {
    private:
        string nome;
        string sobrenome;
        string empresa;
        string telefone;
        string endereco;
    public:

        AgendaTelefonica(string nome = "John Doe", string sobrenome = "Alves", string empresa = "Universidade de Brasilia", string telefone = "66 1234-5678", string endereco = "") 
        : nome(nome), sobrenome(sobrenome), empresa(empresa), telefone(telefone), endereco(endereco) {};
 
        string getNome() {
            return this->nome;
        }
        string getSobrenome() {
            return this->sobrenome;
        }
        string getEmpresa() {
            return this->empresa;
        }
        string getTelefone() {
            return this->telefone;
        }
        string getEndereco() {
            return this->endereco;
        }

};

int main() {
    AgendaTelefonica agenda;
    cout << agenda.getNome();
    return 0;
}
