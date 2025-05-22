
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

void cargarArticulos(int articulos[]);
void mostrarArticulos(int articulos[]);
void mostarArticuloMasVendido(int articulos[]);
void mostrarArticulosNoVendidos(int articulos[]);
int articulosVendidosArticulo(int articulos[]);

int main()
{
    int articulos[20] = {};
    cargarArticulos(articulos);

    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
    mostarArticuloMasVendido(articulos);
    mostrarArticulosNoVendidos(articulos);
    cout << "El articulo 10 vendio " << articulosVendidosArticulo(articulos) << " unidades" << endl;
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;

    return 0;
}

void cargarArticulos(int articulos[])
{
    int articulo, cantidad;
    cout << "Ingrese el nro del articulo (1-20):";
    cin >> articulo;
    cout << "Ingrese la cantidad vendida:";
    cin >> cantidad;
    while (articulo != 0)
    {
        articulos[articulo - 1] = cantidad;
        cout << "Ingrese el nro del articulo (1-20):";
        cin >> articulo;
        if (articulo == 0)
        {
            break;
        }
        cout << "Ingrese la cantidad vendida:";
        cin >> cantidad;
    }
}
void mostrarArticulos(int articulos[])
{
    for (int i = 0; i < 20; i++)
    {
        cout << "Del articulo " << i + 1 << " se vendieron " << articulos[i] << " unidades" << endl;
    }
}
void mostarArticuloMasVendido(int articulos[])
{
    int max = articulos[0];
    int posicion = 0;
    for (int i = 1; i < 20; i++)
    {
        if (articulos[i] > max)
        {
            max = articulos[i];
            posicion = i;
        }
    }
    cout << "El articulo " << posicion + 1 << " es el mas vendido con " << max << " unidades" << endl;
}
void mostrarArticulosNoVendidos(int articulos[])
{
    cout << "Los articulos no vendidos fueron: " << endl;
    for (int i = 0; i < 20; i++)
    {
        if (articulos[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}
int articulosVendidosArticulo(int articulos[])
{
    return articulos[9];
}