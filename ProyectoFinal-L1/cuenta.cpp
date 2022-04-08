#include <iostream>
#include "includes/pinguino.h"

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


    cout << "1- Agregar Pedidos: " << endl;
    cout << "2- Calcular Total: " << endl;
    cout << "3- Divir Cuenta: " << endl;
    cout << "4- Dejarlo en manos del Pinguino: " << endl;
    cout << "0- Salir: " << endl;


    cout << endl;
    cout << "Ingrese una opicion: ";
    
    cin >> opcion; 

    if(opcion == 0)
    {
        break;
    }
    if (opcion == 4)
    {
        pinwuino();
    }
    else
    {
        pedidos(opcion);
    }
    
    }   

}