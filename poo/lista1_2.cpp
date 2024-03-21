#include <iostream>

using namespace std;

// Utilizei como referencia a agenda telefônica de um dispositivo IOS
class Aluno {
    private:
        string nome;
        string matricula;
        string curso;
    public:
        void setNome(string nome) {
            this->nome = nome;
        }
        void setMatricula(string matricula) {
            this->matricula = nome;
        }
        void setCurso(string curso) {
            this->curso = nome;
        }

        void exibirInformacoes() {
            cout << this->nome << endl;
            cout << this->matricula << endl;
            cout << this->curso << endl;
        }
        

};

int main() {

    int qtdd;
    string tempName;
    string tempCurso;
    string tempMatricula;
    
    cout << "Olá seja bem vindo" << endl;
    cout << "Quantos alunos deseja cadastrar?" << endl;
    cin >> qtdd;

    Aluno alunos[qtdd];

    for (int i = 0; i < qtdd; i++)
    {
        cout << "Nome do " << i+1 << "o  aluno" << endl;
        cin >> tempName;
        alunos[i].setNome(tempName);
        cout << "Matricula do " << i+1 << "o  aluno" << endl;
        cin >> tempMatricula;
        alunos[i].setMatricula(tempMatricula);
        cout << "Curso do " << i+1 << "o  aluno" << endl;
        cin >> tempCurso;
        alunos[i].setCurso(tempCurso);
    }
    



    return 0;
}