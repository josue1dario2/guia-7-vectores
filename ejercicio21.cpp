
/*
    Hacer un programa para ingresar las encuestas de edad efectuadas a 200 personas y luego listar
    la cantidad de personas en cada rango de edad según la siguiente tabla.

    Década 0.	(Edad 1-9)	Cantidad de encuestados: 99
    Década 1.	(Edad 10-19)	Cantidad de encuestados: 99
    ……………………………
    Década 9.	(Edad 90-99)	Cantidad de encuestados: 99
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
