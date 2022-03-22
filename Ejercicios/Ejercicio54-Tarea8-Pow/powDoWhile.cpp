#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int n1 = 0, n2 = 2;

  do
  {

    cout << "Ingresa el numero que quieres potenciar su raiz Cuadrada: " << endl;
    cin >> n1;  

    if (n1 == 0)
        {
            cout << "La raiz de Cero siempre es Cero, ingresa un numero mayor: " << endl;
        }
    else
    cout << "La raiz de cuadrada de " << n1 << " es: " << pow(n1, n2);

  } while (n1 == 0);
    cout << endl;
    cout << endl;

  return 0;
}