#include <iostream>
#include <vector>
using namespace std;

/*
    Hacer una función que reciba un vector de enteros de N elementos, su tamaño y
    un valor a buscar. Luego retornar la cantidad de veces que el valor a buscar aparece en el vector.
*/
int contarAparicionesEnVector(int num[], int tamanio, int valorBuscado);

int main()
{
    int num1[2] = {1, 1};
    int valorBuscado = 1;
    cout << "la cantidad que aparece " << valorBuscado << " es " << contarAparicionesEnVector(num1, sizeof(num1) / sizeof(num1[0]), valorBuscado);
}
int contarAparicionesEnVector(int num[], int tamanio, int valorBuscado)
{
    int cont = 0;
    for (int i = 1; i < tamanio; i++)
    {
        if (num[i] == valorBuscado)
        {
            cont++;
        }
    }
    return cont;
}