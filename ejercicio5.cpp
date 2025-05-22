#include <iostream>
#include <cmath>
using namespace std;

/*
    Leer 5 números y guardarlos en un vector. Determinar e informar los dos últimos números
    pares en el vector y sus respectivas posiciones en el mismo. Suponer que habrá al menos
    dos números pares
*/
void ingresarNumeros(int num[]);
void determinarMinImparMaxPar(int num[]);

int main()
{
    int num[5] = {};
    ingresarNumeros(num);
    determinarMinImparMaxPar(num);

    return 0;
}
void ingresarNumeros(int num[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num[i];
    }
}
void determinarMinImparMaxPar(int num[])
{
    int impar = num[0];
    int par = num[0];

    for (int i = 0; i < 5; i++)
    {
        if (num[i] % 2 == 0 && num[i] > par)
        {
            par = num[i];
        }
        else if (num[i] % 2 != 0 && num[i] < impar)
        {
            impar = num[i];
        }
    }
    cout << "El menor de los impares es " << impar << endl;
    cout << "El mayor de los pares es " << par << endl;
}
