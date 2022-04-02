#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // string nombres[3][2];

    // nombres[0] [0] = "Juan";
    // nombres[0] [1] = "Perez";

    // nombres[1] [0] = "Pedro";
    // nombres[1] [1] = "Mejia";

    // nombres[2] [0] = "Maria";
    // nombres[2] [1] = "Sabillon";

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
