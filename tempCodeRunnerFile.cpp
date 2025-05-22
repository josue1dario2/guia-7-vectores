#include <iostream>
using namespace std;

/*
    Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor
    máximo y su posición dentro del vector.
*/
void ingresarNumeros(int num[]);
pair<int, int> determinarMax(int num[]);

int main()
{
    int numeros[10];
    ingresarNumeros(numeros);
    pair<int, int> resultado = determinarMax(numeros);

    cout << "El valor máximo es: " << resultado.first << endl;
    cout << "Su posición es: " << resultado.second << endl;
    return 0;
}

void ingresarNumeros(int num[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num[i];
    }
}
pair<int, int> determinarMax(int num[])
{
    int maximo = num[0];
    int posicion = 0;

    for (int i = 1; i < 10; i++)
    {
        if (num[0] > maximo)
        {
            maximo = num[0];
            posicion = i;
        }
    }
    return {maximo, posicion};
}