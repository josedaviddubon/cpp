#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombres[3][2];

    nombres[0] [0] = "Juan";
    nombres[0] [1] = "Perez";

    nombres[1] [0] = "Pedro";
    nombres[1] [1] = "Mejia";

    nombres[2] [0] = "Maria";
    nombres[2] [1] = "Sabillon";

    for (int i = 0; i < 3; i++)
    {
        //cout << nombres[i][0] << " " << nombres[i][1] << endl;
        for (int j = 0; j < 2; j++)
        {
            cout << nombres[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
