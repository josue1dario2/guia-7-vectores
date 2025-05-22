#include <iostream>
#include <utility>
using namespace std;

/*
    Leer 10 números y guardarlos en un vector. Calcular el promedio y
    luego mostrar por pantalla los valores que son mayores al promedio
*/
void ingresarNumeros(int num[]);
float calcularPromedio(int num[]);

int main()
{
    int numeros[10];
    float promedio = 0;
    ingresarNumeros(numeros);
    promedio = calcularPromedio(numeros);

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > promedio)
        {
            cout << "El numero " << numeros[i] << " es mayor al promedio " << promedio << endl;
        }
    }

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
float calcularPromedio(int num[])
{
    float total = 0;

    for (int i = 0; i < 10; i++)
    {
        total += num[i];
    }
    return total / 10;
}