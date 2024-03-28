#include <iostream>

using namespace std;

class Aluno {
    private:
        string nome;
        string matricula;
        string semestre;
        string curso;
        int idade;
    public:
        void setNome(string nome) {
            this->nome = nome;
        }
        void setIdade(int idade) {
            this->idade = idade;
        }
        void setMatricula(string matricula) {
            this->matricula = nome;
        }
        void setSemestre(string semestre) {
            this->semestre = nome;
        }
        void setCurso(string curso) {
            this->curso = curso;
        }

        void exibirInformacoes() {
            cout << this->nome << endl;
            cout << this->matricula << endl;
            cout << this->semestre << endl;
            cout << this->idade << endl;
            cout << this->semestre << endl;
        }
        

};

int main() {

    int qtdd;
    string tempName;
    string tempCurso;
    string tempMatricula;
    int tempIdade;
    string tempSemestre;

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

        cout << "Idade do " << i+1 << "o  aluno" << endl;
        cin >> tempIdade;
        alunos[i].setIdade(tempIdade);

        cout << "Curso do " << i+1 << "o  aluno" << endl;
        cin >> tempCurso;
        alunos[i].setCurso(tempCurso);

        cout << "Semestre do " << i+1 << "o aluno" << endl;
        cin >> tempSemestre;
        alunos[i].setSemestre(tempSemestre);
    }
    



    return 0;
}
