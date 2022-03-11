#include <iostream>

using namespace std;

void imprirmirCaracteres(char caracter, int ciclos)
{
    for (int i = 0; i < ciclos; i++)
    {
        cout << caracter;
    }
    cout << endl;
    
}

int main(int argc, char const *argv[])
{
    imprirmirCaracteres('@', 10);
    imprirmirCaracteres('#', 5);
    cout << "Hola mundo" << endl;
    imprirmirCaracteres('*', 1000);

    return 0;
}
