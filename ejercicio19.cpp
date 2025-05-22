
/*
    Dadas dos listas de 10 números cada una y sin números repetidos, cargarlas en dos vectores.
    Generar un tercer vector que contenga solamente aquellos elementos que están repetidos en ambos vectores.
    Mostrar en pantalla el nuevo vector.
    Vector 1: [8, 10, -3, 5, 7]
    Vector 2: [10, -8, 5, 9, -3]
    Vector 3: [10, -3, 5]
*/
#include <iostream>
using namespace std;

void generarVectorRepetidos(int vec1[], int vec2[]);

int main()
{
    int vec1[10] = {8, 25, 20, -7, 15, 12, 29, -5, 11, 18};
    int vec2[10] = {9, 8, 20, 1, 2, 10, 23, 34, 11, 18};
    generarVectorRepetidos(vec1, vec2);

    return 0;
}

void generarVectorRepetidos(int vec1[], int vec2[])
{
    int repetidos[10] = {};
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vec1[i] == vec2[j])
            {
                repetidos[cont] = vec1[i];
                cont++;
            }
        }
    }
    for (int i = 0; i < cont; i++)
    {
        cout << repetidos[i] << " ";
    }
}
