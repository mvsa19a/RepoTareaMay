/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/
#include <iostream>
using namespace std;

#define MAX 100

int main()
{
    int suma;
    suma = (MAX * (MAX + 1) * (2 * MAX + 1)) / 6;

    cout << "La suma de los cuadrados es" << suma;

    return 0;
}
