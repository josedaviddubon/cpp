#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal = 0, total =0, impuesto = 0.15;

    cout << "Ingrese el SubTotal de la Factura: ";
    cin >> subtotal;

    //Proceso

    total = subtotal + (subtotal * 0.15);

    //salida

    cout << endl;
    cout << "Total a pagar es: " << total;

    return 0;
}
