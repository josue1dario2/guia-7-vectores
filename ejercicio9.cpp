#include <iostream>
#include <cmath>
using namespace std;

/*
    Dada una lista de 20 números enteros, cargarlos en un vector. Determinar e informar con
    un cartel aclaratorio si el vector está ordenado estrictamente en forma creciente.
    Por ejemplo: el vector [1, 3, 5, 7, 9] está ordenado estrictamente. El vector [1,  5,  3,  7] no lo está.
*/
bool verOrdenamiento(int num[]);

int main()
{
    int subgrupos[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if (verOrdenamiento(subgrupos))
    {
        cout << "La lista esta ordenada " << endl;
    }
    else
    {
        cout << "La lista esta desordenada " << endl;
    }

    return 0;
}
bool verOrdenamiento(int num[])
{
    for (int i = 0; i < 20; i++)
    {
        if (num[i] <= num[i - 1])
        {
            return false;
        }
    }
    return true;
}