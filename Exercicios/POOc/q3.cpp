/*
  Questão:
  Você foi contratado para desenvolver um sistema de gerenciamento de imóveis para uma imobiliária.
  Uma das funcionalidades desse sistema é registrar informações sobre casas disponíveis para venda.

  Implementar a classe "Casa". A classe Casa deve possuir os seguintes atributos:
  - Endereço: uma string do local onde a casa.
  - Área: um double que representa a área total da casa em metros quadrados.
  - Número de quartos: um inteiro da quantidade de quartos da casa.
  - Preço: um double que representado o preço da casa.

  Além disso, a classe Casa deve conter os seguintes métodos:
  - Construtor padrão e construtor parametrizado para inicializar os atributos da casa.
  - Métodos de acesso (getters) e modificação (setters) para todos os atributos.
  - Método para calcular o preço por metro quadrado da casa.
  - Método para imprimir todas as informações da casa.

  A classe Casa deve herdar da classe Imovel e deve conter métodos para manipular informações básicas de imóveis.

  Por fim gerar um arquivo txt com todas as casas informadas.
*/

#include <iostream>
#include <fstream>

class Imovel {
protected:
    std::string endereco;
    double area;

public:
    Imovel() : endereco(""), area(0) {}
    Imovel(std::string end, double ar) : endereco(end), area(ar) {}

    // Getters e setters
    std::string getEndereco() const { return endereco; }
    void setEndereco(std::string end) { endereco = end; }
    double getArea() const { return area; }
    void setArea(double ar) { area = ar; }

    virtual void imprimir() const {
        std::cout << "Endereço: " << endereco << std::endl;
        std::cout << "Área: " << area << " metros quadrados" << std::endl;
    }
};

class Casa : public Imovel {
private:
    int numQuartos;
    double preco;

public:
    Casa() : Imovel(), numQuartos(0), preco(0) {}
    Casa(std::string end, double ar, int quartos, double p) : Imovel(end, ar), numQuartos(quartos), preco(p) {}

    // Getters e setters
    int getNumQuartos() const { return numQuartos; }
    void setNumQuartos(int quartos) { numQuartos = quartos; }
    double getPreco() const { return preco; }
    void setPreco(double p) { preco = p; }

    // Método para calcular o preço por metro quadrado
    double calcularPrecoPorMetroQuadrado() const {
        if (area != 0)
            return preco / area;
        else
            return 0;
    }

    // Método para imprimir todas as informações da casa
    void imprimir() const override {
        Imovel::imprimir();
        std::cout << "Número de quartos: " << numQuartos << std::endl;
        std::cout << "Preço: R$ " << preco << std::endl;
        std::cout << "Preço por metro quadrado: R$ " << calcularPrecoPorMetroQuadrado() << " por metro quadrado" << std::endl;
    }
};

int main() {
    std::ofstream outputFile("casas.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Erro ao abrir o arquivo." << std::endl;
        return 1;
    }

    int numCasas;
    std::cout << "Quantas casas deseja cadastrar? ";
    std::cin >> numCasas;

    Casa casas[numCasas];

    for (int i = 0; i < numCasas; ++i) {
        std::string endereco;
        double area, preco;
        int numQuartos;

        std::cout << "\nCasa " << i + 1 << ":" << std::endl;
        std::cout << "Endereço: ";
        std::cin.ignore();
        std::getline(std::cin, endereco);
        std::cout << "Área (em metros quadrados): ";
        std::cin >> area;
        std::cout << "Número de quartos: ";
        std::cin >> numQuartos;
        std::cout << "Preço: R$ ";
        std::cin >> preco;

        casas[i] = Casa(endereco, area, numQuartos, preco);
    }

    // Escrevendo informações das casas no arquivo
    for (int i = 0; i < numCasas; ++i) {
        outputFile << "Casa " << i + 1 << ":\n";
        outputFile << "Endereço: " << casas[i].getEndereco() << "\n";
        outputFile << "Área: " << casas[i].getArea() << " metros quadrados\n";
        outputFile << "Número de quartos: " << casas[i].getNumQuartos() << "\n";
        outputFile << "Preço: R$ " << casas[i].getPreco() << "\n";
        outputFile << "Preço por metro quadrado: R$ " << casas[i].calcularPrecoPorMetroQuadrado() << " por metro quadrado\n\n";
    }

    std::cout << "As informações das casas foram salvas no arquivo casas.txt." << std::endl;
    outputFile.close();

    return 0;
}
