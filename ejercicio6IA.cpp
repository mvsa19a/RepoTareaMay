/*Hacer un programa que sume los números pares comprendidos entre 100 y 200*/
#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int num;

    for (num = 100; num <= 200; num += 2)
    {
        suma += num;
    }

    cout << "La suma de los números pares entre 100 y 200 es: " << suma << endl;

    return 0;