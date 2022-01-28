#include <iostream>

    using namespace std;

    int main(int argc, char const *argv[])
    {   

        ///datos de entrada
        int a = 0;
        int b = 0;
        int suma = 0, resta = 0, multiplicacion =0 ;
        double division = 0;


        cout <<"Ingrese el valor a: " ;
        cin >> a;

        cout << "Ingrese el valor de b: ";
        cin >> b;

        //proceso
        suma = a + b;
        resta = a - b;
        multiplicacion = a * b ;
        division = a / b;

        //salida
        cout << endl;
        cout << "La suma de a + b es: " << suma;
        cout << endl;
        cout << "La resta de a - b es: " << resta;
        cout << endl;
        cout << "La multiplicacion de a * b es: " << multiplicacion;
        cout << endl;
        cout << "La division de a / b es: " << division;


        return 0;
    }
    