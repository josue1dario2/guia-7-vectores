
/*
    Dadas dos listas de 5 números cada una y sin números repetidos, cargarlas en dos vectores.
    Generar un tercer vector que contenga los elementos de ambos vectores intercalados.
    Mostrar en pantalla el nuevo vector.
    Vector 1: [8, 10, -3, 5, 7]
    Vector 2: [20, -8, 10, 9, 3]
    Vector 3: [8, 20, 10, -8, -3, 10, 5, 9, 7, 3]
*/
#include <iostream>
using namespace std;

void intercalarVectores(int vec1[], int vec2[]);

int main()
{
    int vec1[5] = {8, 10, -3, 5, 7};
    int vec2[5] = {20, -8, 10, 9, 3};
    intercalarVectores(vec1, vec2);

    return 0;
}

void intercalarVectores(int vec1[], int vec2[])
{
    int resultado[10] = {};
    for (int i = 0; i < 5; i++)
    {
        resultado[i * 2] = vec1[i];
        resultado[i * 2 + 1] = vec2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << resultado[i] << " ";
    }
}
