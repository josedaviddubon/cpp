#include <iostream>

using namespace std;

int sumar(int a, int b){

    return a+b;
}


int restar(int a, int b){

    return a-b;
}


int main(int argc, char const *argv[])
{
    system("cls");
    int numero1 = 0;
    int numero2 = 0;

    cout << "Ingrese el valor de a: ";
    cin >> numero1;
    cout << "Ingrese el valor de b: ";
    cin >> numero2;

 


    cout << "La suma es: " << sumar(numero1, numero2);
    cout<< endl;
    cout << "La resta es: "<<restar(numero1, numero2);
    return 0;
}
