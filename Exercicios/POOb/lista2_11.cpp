#include <iostream>
#include <fstream>


class Veiculo {
    double peso;
    std::string cor;
    int ano;
    std::string marca;

    public:
        double getPeso() {
            return this->peso;
        }
        std::string getCor() {
            return this->cor;
        }
        int getAno() {
            return this->ano;
        }
        std::string getMarca() {
            return this->marca;
        }

        void imprimir() {
            std::cout << this->ano << std::endl;
            std::cout << this->cor << std::endl;
            std::cout << this->marca << std::endl;
            std::cout << this->peso << std::endl;
        }

        void setPeso(double inserirPeso) {this->peso = inserirPeso;};
        void setCor(std::string inserirCor) {this->cor = inserirCor;};
        void setAno(int inserirAno) {this->ano = inserirAno;};
        void setMarca(std::string inserirMarca) {this->marca = inserirMarca;};
};


int main() {
    int qtdd, tempAno;
    double tempPeso;
    std::string tempCor, tempMarca;

    std::ofstream outputFile("output.txt");

    std::cout << "Insira quantos carros voce deseja cadastrar" << std::endl;
    std::cin >> qtdd;

    Veiculo veiculos[qtdd];

    for (int i = 0; i < qtdd; i++)
    {

        std::cout << "Insira o peso do " << i << "o veiculo" << std::endl;
        std::cin >> tempPeso;
        veiculos[i].setPeso(tempPeso);

        std::cout << "Insira a cor do " << i << "o veiculo" << std::endl;
        std::cin >> tempCor;
        veiculos[i].setCor(tempCor);


        std::cout << "Insira o ano do " << i << "o veiculo" << std::endl;
        std::cin >> tempAno;
        veiculos[i].setAno(tempAno);


        std::cout << "Insira o marca do " << i << "o veiculo" << std::endl;
        std::cin >> tempMarca;
        veiculos[i].setMarca(tempMarca);
    };

    for (int j = 0; j < qtdd; j++)
    {
        outputFile << "ID Veículo: " << j << std::endl;
        outputFile << "Ano: " << veiculos[j].getAno() << std::endl;
        outputFile << "Cor: " << veiculos[j].getCor() << std::endl;
        outputFile << "Marca: " << veiculos[j].getMarca() << std::endl;
        outputFile << "Peso: " << veiculos[j].getPeso() << std::endl;
        outputFile << "\n";

    };
    
    std::cout << "Os veiculos foram salvos no arquivo output.txt, no mesmo diretorio onde o programa foi executado!" << std::endl;
    outputFile.close();


    

    return 0;
}
