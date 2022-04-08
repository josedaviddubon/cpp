#include <iostream>
#include <cstdlib>
#include <ctime>
#include "includes/pinguino.h"


using namespace std;


int pinwuino(){

    bool pinguino = false;
    int participante = 1, participantes = 2, numeroElegido = 0;
    const int PinguinoAsignado = 2; 

    //Iniciando el numero elegido
    srand(time(NULL));  

    cout <<  "********* Bienvenido al Juego del Pinguino *********" << endl;
    system("Pause");

    cout << "Ingrese cantidad de Participantes: ";
    cin >> participantes;
    cin.ignore();

    while (pinguino == false)
    {
        numeroElegido = (rand() % 6) + 1;

        cout << endl;
        cout << "Presiona Enter para Avanzar..." ;
        cin.ignore();

        if (PinguinoAsignado != numeroElegido)
        {
            cout << "Tu dia de suerte\n";
            Estado(0);

            if (participante != participantes)
            {
                participante++;
            }
            else
            {
                participante = 1;
            }

            cout << "Participante " << participante << ": Es tu turno\n";
        }
        else
        {
            cout << "JA! Te ha tocado Pagar la cuenta\n"; 
            Estado(1);
            pinguino = true;
        }
        
    }
        cout << "El Participante: " << participante << " Pagara la cuenta..\n";
    
}