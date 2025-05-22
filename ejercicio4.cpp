#include <iostream>
#include <cmath>
using namespace std;

/*
    Leer 5 números y guardarlos en un vector. Determinar e informar cuál es el valor
    máximo absoluto del vector. Por ejemplo 20, -43 y 5, el máximo absoluto es -43
*/
void ingresarNumeros(int num[]);
int determinarMax(int num[]);

int main()
{
    int numeros[5] = {};
    ingresarNumeros(numeros);

    cout << "El maximo absoluto es " << determinarMax(numeros) << endl;
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

int determinarMax(int num[])
{
    int maximoAbs = num[0];
    int posicion = 0;

    for (int i = 1; i < 5; i++)
    {
        if (abs(num[i]) > maximoAbs)
        {
            maximoAbs = abs(num[i]);
            posicion = i;
        }
    }
    return num[posicion];
}