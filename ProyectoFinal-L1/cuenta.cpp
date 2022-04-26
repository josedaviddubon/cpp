#include <iostream>
#include "Includes/pinguino.h"

using namespace std;


void menu()
{

    int opcion = 0;

    while(true)
    {
    system("cls");

    cout << "******";
    cout << "PINGUINO";
    cout << "*****";
    cout << endl;
    cout << endl;
    cout << endl;


    cout << "1- Agregar Precios y dividir cuentas: " << endl;
    cout << "2- Dejarlo en manos del Pinguino: " << endl;
    cout << "0- Salir: " << endl;


    cout << endl;
    cout << "Ingrese una opicion: ";
    
    cin >> opcion; 

    if(opcion == 0)
    {
        break;
    }
    if (opcion == 2)
    {
        pinwuinos();
    }
    else
    {
        pedidos(opcion);
    }
    
    }   

}