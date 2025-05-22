#include <iostream>
#include <cmath>
using namespace std;

/*
    Dada una lista de 5 números, cargarlos en un vector. Armar luego otro vector de 9 elementos donde
    por cada 2 elementos del vector original intercale el promedio de ellos.
    Por ejemplo: [2, 4, 6, 8, 10],  el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].
    1. sumar 2, 4 sacar el promedio agregarlo en un arreglo de promedio
    2. intecalar los valores
*/
void intercalorPromedio(int arreglo[], double resultado[]);
void imprimirResultado(double resultado[]);

int main()
{
    int original[5] = {2, 4, 6, 8, 10};
    double resultado[9];
    intercalorPromedio(original, resultado);
    imprimirResultado(resultado);
}

void intercalorPromedio(int original[], double resultado[])
{
    int j = 0;
    for (int i = 0; i < 5; ++i)
    {
        resultado[j++] = original[i];
        if (i < 4)
        {
            resultado[j++] = (original[i] + original[i + 1]) / 2.0;
        }
    }
}

void imprimirResultado(double resultado[])
{
    for (int i = 0; i < 9; ++i)
    {
        cout << resultado[i] << " ";
    }
    cout << endl;
}
