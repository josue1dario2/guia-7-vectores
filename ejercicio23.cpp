
/*
    Una empresa posee un grupo de 15 vendedores para atender a sus clientes. Por cada venta realizada
    se genera un registro con la siguiente información:
    Número de vendedor (1 a 15)
    Importe de la venta (en $)
    Un vendedor puede realizar más de una venta. El último registro se indica con número de vendedor igual a 0.
    Se pide determinar e informar:
    a) El número de vendedor que más vendió en total (en $).
    b) Cada uno de los números de vendedores que no hayan realizado ventas.
    c) El total recaudado por la empresa por todas las ventas efectuadas por sus vendedores
*/
#include <iostream>
using namespace std;

void cargarVenta(int vendedores[]);
void mostarVendedorQueMasVendio(int vendedores[]);
void mostrarVendoresQueNoVendieron(int vendedores[]);
void mostrarTotalRecaudado(int vendedores[]);

int main()
{
    int vendedores[15] = {};
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
    cargarVenta(vendedores);
    mostarVendedorQueMasVendio(vendedores);
    mostrarVendoresQueNoVendieron(vendedores);
    mostrarTotalRecaudado(vendedores);
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
    return 0;
}

void cargarVenta(int vendedores[])
{
    int vendedor, importe;
    cout << "Ingrese el nro del vendedor (1-15):";
    cin >> vendedor;
    cout << "Ingrese Importe de la venta:";
    cin >> importe;
    while (vendedor != 0)
    {
        vendedores[vendedor - 1] += importe;
        cout << "Ingrese el nro del vendedor (1-15):";
        cin >> vendedor;
        if (vendedor == 0)
        {
            break;
        }
        cout << "Ingrese Importe de la venta:";
        cin >> importe;
    }
}

void mostarVendedorQueMasVendio(int vendedores[])
{
    int max = vendedores[0];
    int posicion = 0;
    for (int i = 1; i < 15; i++)
    {
        if (vendedores[i] > max)
        {
            max = vendedores[i];
            posicion = i;
        }
    }
    cout << "El vendedor " << posicion + 1 << " es el que mas vendido con $ " << max << endl;
}

void mostrarVendoresQueNoVendieron(int vendedores[])
{
    cout << "Los vendedores que no realizaron ventas fueron: " << endl;
    for (int i = 0; i < 15; i++)
    {
        if (vendedores[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}
void mostrarTotalRecaudado(int vendedores[])
{
    int acumulador = 0;
    for (int i = 0; i < 15; i++)
    {
        if (vendedores[i] > 0)
        {
            acumulador += vendedores[i];
        }
    }
    cout << "El total acumulado en las ventas fue de $ " << acumulador << endl;
}