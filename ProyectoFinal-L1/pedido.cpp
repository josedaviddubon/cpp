#include <iostream>
#include "includes/pinguino.h"
using namespace std;


void pedidos(int opcion)
{
    system("cls");

    int opcionProducto = 0;
    switch (opcion)
    {
    case 1:
    {   
        cout << "Agregar Precios y dividir cuentas:" << endl;
        cout << "*****************" << endl;
        cout << endl;

        factura();

        cout << endl;
        cout << "Agregar Precios y dividir cuentas: Realizado" << endl << endl;
        system("pause");

        break;
    }
    case 2:
    {   
        cout << "Dejarlo en manos del Pinguino: " << endl;
        cout << "*************" << endl;
        cout << endl;

        pinwuinos();

        cout << endl;
        cout << "Dejarlo en manos del Pinguino: Realizado" << endl << endl;
        system("pause");

        break;
    }    

    default:
        break;
    }

}