
/*
    Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el vector hay
    elementos repetidos y generar otro vector con los elementos repetidos reemplazados por ceros.
    Ejemplo Vector 1: [8, 20, 20, -7, 15, 12, 15, -5, 11, 18]
    Ejemplo Vector 2: [8, 0, 0, -7, 0, 12, 0, -5, 11, 18]
*/
#include <iostream>
using namespace std;

void verificarRepetidos(int arreglo[], int arreglo2[], int tam);
void mostrarArreglo(int arreglo[]);

int main()
{
    int arreglo[10] = {8, 20, 20, -7, 15, 12, 15, -5, 11, 18};
    int arr2[10] = {};
    int tam = 10;
    verificarRepetidos(arreglo, arr2, tam);
    mostrarArreglo(arr2);

    return 0;
}

void verificarRepetidos(int arreglo[], int arreglo2[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        arreglo2[i] = arreglo[i];
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (arreglo[i] == arreglo[j] && arreglo2[i] != 0)
            {
                arreglo2[i] = 0;
                arreglo2[j] = 0;
            }
        }
    }
}
void mostrarArreglo(int arreglo[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arreglo[i] << " ";
    }
}