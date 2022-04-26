#include <iostream>

using namespace std;

void factura()
{
    double subtotal = 0, total =0, impuesto = 0.15, calculoDescuento = 0, calculoImpuesto = 0;
    int descuento = 0, participantes = 0;
    char estaExenta;


    cout << "Ingrese el SubTotal de la Factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento: (0, 10, 15, 20) ";
    cin >> descuento;

    cout << "Factura exenta? s/n ";
    cin >> estaExenta;

    cout << "Dividir partes entre: ";
    cin >> participantes;

    if(estaExenta == 's' || estaExenta == 'S')
        //Proceso exento
        {
            calculoDescuento = (subtotal * descuento)/ 100;
            calculoImpuesto = (subtotal - calculoDescuento)  * 0.00;
            total = (subtotal - calculoDescuento + calculoImpuesto)/ participantes;

        }
    else
        //Proceso no exento
        {
            calculoDescuento = (subtotal * descuento) / 100;
            calculoImpuesto = (subtotal - calculoDescuento)  * impuesto;
            total = (subtotal - calculoDescuento + calculoImpuesto)/ participantes;
        }    

    //salida
            cout << endl;
            cout << "Total a pagar es: " << total;
}