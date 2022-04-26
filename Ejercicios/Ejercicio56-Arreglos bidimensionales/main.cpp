#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int filas = 4, columnas = 2;

    string nombres[filas][columnas] =
    {
        {"Juan", "Peres"},
        {"Maria", "Martinez"},
        {"Pedro", "Jimenez"},
        {"Pablo", "Hernandez"}
    };

    for (int i = 0; i < filas; i++)
    {
        //cout << nombres[i][0] << " " << nombres[i][1] << endl;
        for (int j = 0; j < columnas; j++)
        {
            cout << nombres[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
