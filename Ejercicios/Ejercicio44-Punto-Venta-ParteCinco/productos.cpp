#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;
    switch (opcion)
    {
    case 1:
    {   
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1- Capuccino" << endl;
        cout << "2- Expresso" << endl;
        cout << endl;

        cout << "Ingrese una opicion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Cappuccino - L 40.00", 1 , 40);
            break;
        case 2:
            agregarProducto("1 Expresso   - L 30.00", 1 , 30);
            break;
            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }
    case 2:
    {   
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1- TE CHIA" << endl;
        cout << "2- GRANITA" << endl;
        cout << "3- CAFE HELADO" << endl;
        cout << endl;

        cout << "Ingrese una opicion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Te Chia - L 20.00", 1 , 20);
            break;
        case 2:
            agregarProducto("1 Granita - L 34.00", 1 , 34);
            break;
        case 3:
            agregarProducto("1 Cafe Helado - L 17.00", 1 , 17);
            break;
            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }    
    case 3:
    {   
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1- Dona" << endl;
        cout << "2- Dona con relleno" << endl;
        cout << "3- Tostada" << endl;
        cout << endl;

        cout << "Ingrese una opicion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Dona - L 19.00", 1 , 19);
            break;
        case 2:
            agregarProducto("1 Dona con relleno - L 24.00", 1 , 24);
            break;
        case 3:
            agregarProducto("3 Tostada - L 14.00", 1 ,14);
            break;            
            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }

    default:
        break;
    }

}