#include <iostream>
#include <cmath>
using namespace std;

/*
    Dada una lista de 10 números, cargarlos en un vector. Luego contar y listar la cantidad de
    números pares que aparecen en el vector.
*/
int contarPares(int num[], int pares[]);
void mostrarPares(int pares[], int cantidad);

int main()
{
    int arreglo[] = {1, 2, 3, 2, 1, 2, 7, 8, 10, 10};
    int pares[10] = {}; /// Me gustaria darle el tamaño al arreglo con la cantidad de pares pero al ingresar int pares[cantidadPares] = {} por ejemplo no me permite
    int cantidadPares = contarPares(arreglo, pares);

    cout << "En la lista hay " << cantidadPares << " pares " << endl;
    mostrarPares(pares, cantidadPares);
}

int contarPares(int num[], int pares[])
{
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            pares[cont] = num[i];
            cont++;
        }
    }
    return cont;
}
void mostrarPares(int pares[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        cout << pares[i] << " ";
    }
}