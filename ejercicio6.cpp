#include <iostream>
#include <cmath>
using namespace std;

/*
    Leer 5 números y guardarlos en un vector. Determinar e informar los dos últimos
    números pares en el vector y sus respectivas posiciones en el mismo. Suponer que
    habrá al menos dos números pares
*/
void ingresarNumeros(int num[]);
void determinarNumPares(int num[]);

int main()
{
    int numeros[5] = {};
    ingresarNumeros(numeros);
    determinarNumPares(numeros);
    return 0;
}
void ingresarNumeros(int num[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num[i];
    }
}
void determinarNumPares(int num[])
{
    int penultimoPar = 0;
    int ultimoPar = 0;
    int posPenultimo = -1;
    int posUltimo = -1;

    for (int i = 0; i < 5; i++)
    {
        if (num[i] % 2 == 0 && num[i] > ultimoPar)
        {
            penultimoPar = ultimoPar;
            posPenultimo = posUltimo;
            ultimoPar = num[i];
            posUltimo = i;
        }
    }

    cout << "El ultimo numero par es " << ultimoPar << " en la posicion " << posUltimo << endl;
    cout << "El penultimo numero par es " << penultimoPar << " en la posicion " << posPenultimo << endl;
}
