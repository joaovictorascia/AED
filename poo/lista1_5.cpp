#include <iostream>
#include <stdio.h>
#include <numbers>
#include <math.h>

using namespace std;

class Circulo
{
private:
    double raio;
    double circunferencia;
    double areaDaCircunferencia;

    void calcularCircunferencia()
    {
        circunferencia = 2 * 3.14 * raio;
    }
    void calcularAreaDaCircunferencia()
    {
        areaDaCircunferencia = 3.14 * (pow(raio, 2));
    }

public:
    Circulo(double r)
    {
        raio = r;
        calcularCircunferencia();
        calcularAreaDaCircunferencia();
    }

    double getCircunferencia()
    {
        return circunferencia;
    }
    double getAreaDaCircunferencia()
    {
        return areaDaCircunferencia;
    }
};

class Cubo
{
    private:
        double medidaLado;
        double areaCubo;
        double areaLateral;
        double volumeCubo;

        void calcularArea()
        {
            areaCubo = pow(medidaLado, 2);
        }
        void calcularAreaLateral()
        {
            areaLateral = 4 * (pow(medidaLado, 2));
        }
        void calcularVolumeDoCubo()
        {
            volumeCubo = pow(medidaLado, 3);
        }

    public:
        Cubo(double medidaLadoInput)
        {
            medidaLado = medidaLadoInput;
            calcularArea();
            calcularAreaLateral();
            calcularVolumeDoCubo();
        }

        double getAreaCubo()
        {
            return areaCubo;
        }

        double getAreaLateral()
        {
            return areaLateral;
        }

        double getVolumeCubo()
        {
            return volumeCubo;
        }
};

int main()
{
    double tempRaio;
    double tempLado;

    cout << "Insira o raio da circunferência:" << endl;
    cin >> tempRaio;
    cout << "Insira o a medida de uma aresta do cubo" << endl;
    cin >> tempLado;

    Circulo meuCirculo(tempRaio);
    Cubo meuCubo(tempLado);

    cout << "Area do cubo: " << meuCubo.getAreaCubo() << endl;
    cout << "Area lateral do cubo: " << meuCubo.getAreaLateral() << endl;
    cout << "Volume do cubo: " << meuCubo.getVolumeCubo() << endl;

    cout << "Area da circunferencia: " << meuCirculo.getAreaDaCircunferencia() << endl;
    cout << "Circunferencia: " << meuCirculo.getCircunferencia() << endl;

    return 0;
}
