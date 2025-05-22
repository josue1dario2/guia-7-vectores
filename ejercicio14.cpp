#include <iostream>
#include <cmath>
using namespace std;

/*
    Dada una lista de 10 números, cargarlos en un vector. Luego contar y listar la cantidad de
    números primos que aparecen en el vector.
*/
bool esPrimo(int n);
int contarPrimos(int num[], int pares[]);
void mostrarPrimos(int pares[], int cantidad);

int main()
{
    int arreglo[] = {1, 2, 3, 2, 1, 2, 7, 8, 10, 10};
    int primos[10] = {};
    int cantidadPrimos = contarPrimos(arreglo, primos);

    if (cantidadPrimos > 0)
    {
        cout << "En la lista hay " << cantidadPrimos << " primos " << endl;
        cout << "Estos son los numero primos: " << endl;
        mostrarPrimos(primos, cantidadPrimos);
    }
    else
    {
        cout << "No hay numero primos." << endl;
    }
}

bool esPrimo(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int contarPrimos(int num[], int pares[])
{
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        if (esPrimo(num[i]))
        {
            pares[cont] = num[i];
            cont++;
        }
    }
    return cont;
}
void mostrarPrimos(int pares[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        cout << pares[i] << " ";
    }
}