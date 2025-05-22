#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar 10 números y guardarlos en un vector.
    Determinar e informar cuál es la suma de los valores del vector.
*/
void ingresarNumeros(int num[]);

int sumar(int num[]);

int main()
{
    int valores[10];
    ingresarNumeros(valores);
    int resultado = sumar(valores);

    cout << "El total es de " << resultado << endl;

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

int sumar(int num[])
{
    int suma = 0;
    for (int i = 0; i < 10; i++)
    {
        suma += num[i];
    }
    return suma;
}