#include <iostream>
#include <cmath>
using namespace std;

/*
    Dada una lista de 20 números, cargarlos en un vector. Determinar e informar la cantidad de “rupturas”
    que tiene el vector con respecto a un orden estrictamente creciente.
    Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.
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