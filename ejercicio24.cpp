
/*
    Una empresa que fabrica 200 artículos tiene la siguiente información para cada uno de las ventas del mes anterior:
    Código de Artículo (1 a 200)
    Día (1 a 31)
    Cantidad vendida
    Puede haber más de un registro para el mismo artículo. El lote finaliza con un registro con número de artículo igual a cero.
    Se pide determinar e informar:
    a) Informar para cada código de artículo la cantidad total vendida en el mes.
    b) Informar los días en los que no hubo ventas.
    c) Informar los códigos de los artículos cuyas ventas en cantidad son mayores al promedio.
*/
#include <iostream>
using namespace std;

void totalVendidoPorArticulo(int articulos[]);
void mostrarDiasSinVentas(int dias[]);
void mostrarVentasMayoresAlPromedio(int articulos[], int total);

int main()
{
    int ventas_por_articulo[200] = {};
    int ventas_por_dia[31] = {};
    int total_vendido = 0;
    int registros = 0;

    while (true)
    {
        int codigo_articulo, dia, cantidad;
        cout << "Ingresar el codigo del articulo (1 al 200): ";
        cin >> codigo_articulo;
        if (codigo_articulo == 0)
        {
            break;
        }
        cout << "Ingresar el dia (1 al 31): ";
        cin >> dia;
        cout << "Ingresar la cantidad: ";
        cin >> cantidad;

        // Guardar datos
        ventas_por_articulo[codigo_articulo - 1] += cantidad;
        ventas_por_dia[dia - 1]++;
        total_vendido += cantidad;
        registros++;
    };

    // punto a
    cout << " ############################################### " << endl;
    totalVendidoPorArticulo(ventas_por_articulo);

    // punto b
    mostrarDiasSinVentas(ventas_por_dia);

    // punto c
    mostrarVentasMayoresAlPromedio(ventas_por_articulo, total_vendido);

    return 0;
}

void totalVendidoPorArticulo(int articulos[])
{
    cout << "Cantidad total vendida por articulo: " << endl;

    for (int i = 0; i < 200; i++)
    {
        if (articulos[i] > 0)
        {
            cout << "Articulo " << (i + 1) << " : " << articulos[i] << " articulos. " << endl;
        }
    }
}

void mostrarDiasSinVentas(int dias[])
{
    cout << "Dias sin ventas: " << endl;

    for (int i = 0; i < 31; i++)
    {
        if (dias[i] == 0)
        {
            cout << "Dia " << (i + 1) << endl;
        }
    }
}
void mostrarVentasMayoresAlPromedio(int articulos[], int total)
{
    double promedio = total / 200;
    cout << "Promedio de ventas por artículo: " << promedio << endl;
    cout << "Artículos con ventas mayores al promedio: " << endl;
    for (int i = 0; i < 200; i++)
    {
        if (articulos[i] > promedio)
        {
            cout << "Articulo " << (i + 1) << endl;
        }
    }
}