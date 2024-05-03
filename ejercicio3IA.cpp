/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100*/

#include <iostream>
using namespace std;

int main()
{
    int suma;
    suma = (100 * (100 + 1) * (2 * 100 + 1)) / 6;

    cout << "La suma de los cuadrados es " << suma;

    return 0;
}
