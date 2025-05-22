#include <iostream>
#include <cmath>
using namespace std;

/*
    Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0, 1, 0, 1, 0, 1, 0, 1, 0.
    Luego mostrar los números por pantalla. EL USUARIO NO INGRESA NINGÚN VALOR EN ESTE PROGRAMA.
*/
void ingresarNumeros(int num[]);
void imprimir(int num[]);

int main()
{
    int numeros[10];
    ingresarNumeros(numeros);
    imprimir(numeros);

    return 0;
}

void ingresarNumeros(int num[])
{
    for (int i = 0; i < 10; i++)
    {
        num[i] = (i + 1) % 2;
    }
}
void imprimir(int num[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
}