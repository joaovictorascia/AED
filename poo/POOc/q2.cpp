#include <iostream>
#include <fstream>

class Pessoa {
    std::string nome;

public:
    std::string getNome() {
        return this->nome;
    }

    void setNome(std::string inserirNome) {
        this->nome = inserirNome;
    }
};

class Empregado : public Pessoa {
    double salario;

public:
    double getSalario() {
        return this->salario;
    }

    void setSalario(double inserirSalario) {
        this->salario = inserirSalario;
    }

    virtual double calcularSalario() {
        return this->salario;
    }
};

class Vendedor : public Empregado {
    double valorVendas;
    double comissao;

public:
    double getValorVendas() {
        return this->valorVendas;
    }

    void setValorVendas(double inserirValorVendas) {
        this->valorVendas = inserirValorVendas;
    }

    double getComissao() {
        return this->comissao;
    }

    void setComissao(double inserirComissao) {
        this->comissao = inserirComissao;
    }

    double calcularSalario() override {
        return this->getSalario() + (this->valorVendas * this->comissao / 100.0);
    }
};

int main() {
    int qtdd;
    std::string tempNome;
    double tempSalario, tempValorVendas, tempComissao;

    std::ofstream outputFile("output.txt");

    std::cout << "Insira quantos vendedores você deseja cadastrar: ";
    std::cin >> qtdd;

    Vendedor vendedores[qtdd];

    for (int i = 0; i < qtdd; i++) {
        std::cout << "\nInsira o nome do vendedor: ";
        std::cin >> tempNome;
        vendedores[i].setNome(tempNome);

        std::cout << "Insira o salário base do vendedor: ";
        std::cin >> tempSalario;
        vendedores[i].setSalario(tempSalario);

        std::cout << "Insira o valor das vendas do vendedor: ";
        std::cin >> tempValorVendas;
        vendedores[i].setValorVendas(tempValorVendas);

        std::cout << "Insira a comissão do vendedor (%): ";
        std::cin >> tempComissao;
        vendedores[i].setComissao(tempComissao);
    }

    for (int j = 0; j < qtdd; j++) {
        outputFile << "Nome do Vendedor: " << vendedores[j].getNome() << std::endl;
        outputFile << "Salário Base: " << vendedores[j].getSalario() << std::endl;
        outputFile << "Valor das Vendas: " << vendedores[j].getValorVendas() << std::endl;
        outputFile << "Comissão: " << vendedores[j].getComissao() << "%" << std::endl;
        outputFile << "Salário Total: " << vendedores[j].calcularSalario() << std::endl;
        outputFile << "\n";
    }

    std::cout << "Os vendedores foram salvos no arquivo output.txt, no mesmo diretório onde o programa foi executado!" << std::endl;
    outputFile.close();

    return 0;
}
