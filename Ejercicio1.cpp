/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    int suma;
    cout << "Dame un numero";
    cin >> num;

    suma = (pow(num, 2) + num) / 2;

    cout << "La suma es:" << suma << endl;

    return 0;
}