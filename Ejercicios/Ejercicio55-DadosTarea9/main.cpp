#include <iostream>
#include <ctime>                                      
#include <cstdlib>                                   
   

using namespace std;


int main (){

    int dado1 = 0 ,dado2 = 0;
    char resultado = 0;


    do
    {
        dado1 = ( 1 + rand() % 6 );
        dado2 = ( 1 + rand() % 6 );

        cout << "El dado uno es: " << dado1 << endl;
        cout << "El dado dos es: " << dado2 << endl;

        cout << "Desea lazar de nuevo los dados?" << endl; 
        cin >> resultado;

    } while (resultado == 'S');
     
}
