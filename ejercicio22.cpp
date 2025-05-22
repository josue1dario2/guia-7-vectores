
/*
    Una empresa comercializa 20 tipos de artículos y por cada venta realizada genera un registro
    con los siguientes datos:
    Número de Artículo (1 a 20)
    Cantidad Vendida
    Puede haber varios registros para el mismo artículo y el último registro se indica cuando se
    ingresa un número de artículo igual a 0. Se pide determinar e informar:
    a) El número de artículo que más se vendió en total.
    b) Los números de artículos que no registraron ventas.
    c) Cuántas unidades se vendieron del número de artículo 10.
*/
#include <iostream>
using namespace std;

int obtenerEdad();
void mostrarCantidad(int vec[], int DECADAS);

int main()
{
    const int NUM_PERSONAS = 200;
    const int DECADAS = 10;
    int conteoDecadas[DECADAS] = {};

    for (int i = 0; i < NUM_PERSONAS; i++)
    {
        int edad = obtenerEdad();
        int decada = edad / 10;
        if (edad >= 90)
            decada = 9;
        conteoDecadas[decada]++;
    }
    mostrarCantidad(conteoDecadas, DECADAS);

    return 0;
}
int obtenerEdad()
{
    static bool inicializado = false;
    if (!inicializado)
    {
        srand(time(0));
        inicializado = true;
    }
    return (rand() % 99) + 1;
}
void mostrarCantidad(int conteoDecadas[], int DECADAS)
{
    cout << "\nResultados por década:" << endl;
    for (int i = 0; i < DECADAS; i++)
    {
        cout << "Década " << i << ". (Edad " << (i == 0 ? 1 : i * 10) << "-" << (i == 9 ? 99 : (i + 1) * 10 - 1)
             << ") Cantidad de encuestados: " << conteoDecadas[i] << endl;
    }
}
