
/*
    Una agencia de viajes comercializa 20 planes de turismo, para cada uno de ellos se generó un registro con los siguientes datos:
    Número de plan (1 a 20)
    Precio al contado
    Precio con tarjeta
    Los precios son por persona, estos datos se ingresan desordenados.
    Existe un segundo lote con las ventas efectuadas durante el mes pasado en los 8 locales de atención al público.
    Por cada venta que se concretó se dispone de los siguientes datos:
    Número de local (1 a 8)
    Número de plan contratado (1 a 20)
    Cantidad de personas que viajan
    Código de pago (1= contado,2= tarjeta)
    Este lote finaliza con un registro con número de local igual a 9. A partir de esta información se pide:
    a) Informar el total recaudado por la empresa por pago al contado y por pago con tarjeta entre todos los locales.
    b) Informar cuál fue el plan que eligieron más personas en total.
*/
#include <iostream>
using namespace std;

void totalVendidoPorFormasDePago(float precios_contado[], float precios_tarjeta[], int ventas_contado[], int ventas_tarjeta[]);
void mostrarPlaMasElegido(int planes[]);

int main()
{

    float precios_contado[20] = {0};
    float precios_tarjeta[20] = {0};
    int ventas_contado[20] = {0};
    int ventas_tarjeta[20] = {0};
    int personas_por_plan[20] = {0};

    cout << "Cargar datos de los planes:\n";
    for (int i = 0; i < 20; i++)
    {
        cout << "Plan " << (i + 1) << " - Precio al contado: ";
        cin >> precios_contado[i];
        cout << "Plan " << (i + 1) << " - Precio con tarjeta: ";
        cin >> precios_tarjeta[i];
    }

    while (true)
    {
        int plan, local, cantidad, codigo_pago;
        cout << "Ingresar el numero del local (1 al 8): ";
        cin >> local;
        if (local == 9)
        {
            break;
        }
        cout << "Ingresar el numero del plan contratado (1 al 20): ";
        cin >> plan;
        cout << "Ingresar cantidad de personas: ";
        cin >> cantidad;
        cout << "Ingresar el codigo de pago (1= contado,2= tarjeta): ";
        cin >> codigo_pago;

        // Guardar datos
        if (codigo_pago == 1)
        {
            ventas_contado[plan - 1] += cantidad;
        }
        else if (codigo_pago == 2)
        {
            ventas_tarjeta[plan - 1] += cantidad;
        }
        personas_por_plan[plan - 1] += cantidad;
    };

    // punto a
    cout << " ############################################### " << endl;
    totalVendidoPorFormasDePago(precios_contado, precios_tarjeta, ventas_contado, ventas_tarjeta);

    // punto b
    mostrarPlaMasElegido(personas_por_plan);

    return 0;
}

void mostrarPlaMasElegido(int planes[])
{
    int max_personas = planes[0], plan_max = 1;
    for (int i = 0; i < 20; i++)
    {
        if (planes[i] > max_personas)
        {
            max_personas = planes[i];
            plan_max = i + 1;
        }
    }
    cout << "El plan mas elegido es el: " << plan_max << " con " << max_personas << " personas" << endl;
}
void totalVendidoPorFormasDePago(float precios_contado[], float precios_tarjeta[], int ventas_contado[], int ventas_tarjeta[])
{
    float total_contado = 0, total_tarjeta = 0;
    for (int i = 0; i < 20; i++)
    {
        total_contado += precios_contado[i] * ventas_contado[i];
        total_tarjeta += precios_tarjeta[i] * ventas_tarjeta[i];
    }
    cout << "Total recaudado al contado: $" << total_contado << endl;
    cout << "Total recaudado con tarjeta: $" << total_tarjeta << endl;
}