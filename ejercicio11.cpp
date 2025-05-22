#include <iostream>
#include <cmath>
using namespace std;

/*
    Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un número e informar
    el primer índice donde ese número aparece en el vector. En caso de no aparecer se mostrará
    el valor índice igual a -1.
*/
int verRopturas(int num[]);

int main()
{
    int subgrupos[] = {1, 2, 3, 4, 1, 6, 7, 8, 9, 10, 1, 12, 13, 14, 15, 16, 17, 2, 19, 20};

    cout << "La cantidad de ropturas es " << verRopturas(subgrupos) << endl;
}
int verRopturas(int num[])
{
    int cont = 0;
    for (int i = 1; i < 20; i++)
    {
        if (num[i] <= num[i - 1])
        {
            cont++;
        }
    }
    return cont;
}