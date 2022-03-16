#include <iostream>
#include <math.h>

#define Pi 3.1416

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0, seno = 0, coseno = 0, tangente = 0;

    numero = 2*Pi;
    seno = sin(numero);
    coseno = cos(numero);
    tangente = tan(numero);

    cout << "Numero: " << numero << endl;
    cout << "Seno: " << seno << endl;
    cout << "Coseno: " << coseno << endl;
    cout << "Tangante: " << tangente << endl;


    return 0;
}
