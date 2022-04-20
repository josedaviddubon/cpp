#include <iostream>

using namespace std;

double subtotal, total;
string listaPedidos;

// void agregarPedido(string descripcion,int cantidad, double precio)
// {
//      listaPedidos = listaPedidos + descripcion + '\n';
//      subtotal = subtotal + (cantidad * precio);
//      total = (subtotal * 0.15 + subtotal);
// }


void pinwuino()
{
    system("cls");
    cout << "********" << endl;
    cout << "PINGUINO" << endl;
    cout << "********" << endl;
    cout << endl;

    cout << "Pedidos: " << endl;
    cout << listaPedidos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << endl;

    cout << endl;
    cout << "Impuesto: " << "15%";
    cout << endl;

    cout << endl;
    cout << "Total: " << total;
    cout << endl;

    system("pause");
}