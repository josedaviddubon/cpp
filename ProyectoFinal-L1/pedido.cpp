#include <iostream>
using namespace std;


void pedidos(int opcion)
{
    system("cls");

    int opcionProducto = 0;
    switch (opcion)
    {
    case 1:
    {   
        cout << "PEDIDOS" << endl;
        cout << "*****************" << endl;
        cout << endl;

        cout << "Ingrese una opicion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
           //agregarPedido("Esto que", 0 , 0.0);
            break;
        case 2:
            //agregarPedido("a", 0 , 0.0);
            break;
            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "PEDIDO agregado" << endl << endl;
        system("pause");

        break;
    }
    case 2:
    {   
        cout << "CALCULAR TOTAL" << endl;
        cout << "*************" << endl;
        cout << endl;

        cout << "Ingrese una opicion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
              //agregarPedido("Esto que", 0 , 0.0);
            break;
        case 2:
            //agregarPedido("Esto que", 0 , 0.0);
            break;
        case 3:
           //agregarPedido("Esto que", 0 , 0.0);
            break;
            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "CALCULO REALIZADO" << endl << endl;
        system("pause");

        break;
    }    
    case 3:
    {   
        cout << "DIVIDIR CUENTA" << endl;
        cout << "**********" << endl;
        cout << endl;

        cout << "Ingrese una opicion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            //agregarPedido("Esto que", 0 , 0.0);
            break;
        case 2:
             //agregarPedido("Esto que", 0 , 0.0);
            break;
        case 3:
             //agregarPedido("Esto que", 0 , 0.0);
            break;            
            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Cuenta Dividida" << endl << endl;
        system("pause");

        break;
    }

    default:
        break;
    }

}