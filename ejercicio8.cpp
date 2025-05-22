#include <iostream>
#include <cmath>
using namespace std;

/*
    Dada una lista de números compuesta por 10 subgrupos y cada grupo separado del siguiente por un cero,
    se pide generar un vector de 10 elementos con el máximo de cada uno de los subgrupos.
    Luego mostrar los elementos del vector por pantalla.
*/
void mostrarMaxSubGrupo(int num[]);

int main()
{
    int subgrupos[] = {3, 1, 4, 0, 2, 5, 0, 7, 3, 0, 8, 0, 1, 2, 0, 9, 6, 0, 4, 0, 5, 3, 0, 2, 0, 1, 0};
    mostrarMaxSubGrupo(subgrupos);

    return 0;
}
void mostrarMaxSubGrupo(int num[])
{
    int cont = 0;
    int maximos[10] = {};
    int max_actual = num[0];
    bool nuevo_subgrupo = true;

    for (int i = 0; i < 27; i++)
    {
        if (num[i] != 0)
        {
            if (nuevo_subgrupo)
            {
                max_actual = num[i];
                nuevo_subgrupo = false;
            }
            if (num[i] > max_actual)
            {
                max_actual = num[i];
            }
        }
        else
        {
            if (!nuevo_subgrupo)
            {
                maximos[cont] = max_actual;
                cont++;
            }
            nuevo_subgrupo = true;
        }
    }
    if (!nuevo_subgrupo)
    {
        maximos[cont] = max_actual;
        cont++;
    }
    cout << "Los maximos de los subgrupos son: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Grupo " << i + 1 << " : " << maximos[i] << endl;
    }
}
