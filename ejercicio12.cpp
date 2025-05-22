#include <iostream>
#include <cmath>
using namespace std;

/*
    Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un número e informar
    la cantidad de veces que ese número aparece en el vector.
*/
int contarRepeticiones(int num[], int valor);

int main()
{
    int num;
    int arreglo[] = {1, 2, 3, 2, 1, 2, 7, 8, 10, 10};

    cout << "Ingrese el valor a buscar: ";
    cin >> num;
    int cantidadRepeticiones = contarRepeticiones(arreglo, num);
    cout << "La cantidad de veces que se repite " << num << " es " << cantidadRepeticiones << " veces" << endl;
}

int contarRepeticiones(int num[], int valor)
{
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] == valor)
        {
            cont++;
        }
    }
    return cont;
}