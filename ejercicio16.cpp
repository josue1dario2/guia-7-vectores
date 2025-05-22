
/*
    Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el vector hay
    algún elemento repetido y, en caso de haberlo, indicarlo con un cartel “Hay Repetidos”.
*/
#include <iostream>
using namespace std;

bool verificarRepetidos(int arreglo[], int tam);

int main()
{
    int arreglo[10] = {2, 4, 6, 8, 10, 19, 7, 9, 1, 3};
    int tam = 10;
    if (verificarRepetidos(arreglo, tam))
    {
        cout << "Hay repetidos" << endl;
    }
    else
    {
        cout << "No hay repetidos" << endl;
    }
    return 0;
}

bool verificarRepetidos(int arreglo[], int tam)
{
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (arreglo[i] == arreglo[j])
            {
                return true;
            }
        }
    }
    return false;
}