
/*
    Dada una lista de 10 números, cargarlos en un vector. Luego ingresar dos números a y b menores a 10.
    Determinar e informar cuál es el valor máximo en el vector considerando los elementos que están entre
    las posiciones a y b.
*/
#include <iostream>
using namespace std;

int mostrarMaximoRango(int arreglo[], int a, int b);

int main()
{
    int arreglo[10] = {8, 25, 20, -7, 15, 12, 29, -5, 11, 18};
    int a = 0;
    int b = 9;
    cout << "El mayor entre el rango es " << mostrarMaximoRango(arreglo, a, b) << endl;

    return 0;
}

int mostrarMaximoRango(int arreglo[], int a, int b)
{
    int max = arreglo[0];
    for (int i = a; i < b; i++)
    {
        if (arreglo[i] > max)
        {
            max = arreglo[i];
        }
    }
    return max;
}
