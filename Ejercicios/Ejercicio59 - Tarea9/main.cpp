#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "encabezado.h"
 

using namespace std;
 
 
int main()
{
    int fil = 5, col = 5, suma = 0;
    srand(time(NULL));
 
    int matriz[fil][col];
 
    for (int i = 0; i < fil; i++)
        for (int j = 0; j < col; j++)
        {
            matriz[i][j] = random();
            suma += matriz[i][j];
        }
 
    cout << "Matriz: " << endl;
 
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {   
            cout << matriz[i][j] << endl;
            
        }
        cout << endl ;
    }
    
    cout << "Total Suma: " << endl << suma <<endl;
 
    return 0;
}
 
