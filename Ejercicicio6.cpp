//*Hacer un programa que sume los números pares comprendidos entre 100 y 200


#include <iostream>
using namespace std;

int main()
{
    int suma;

    for (int i = 100; i <= 200; i += 2)
    {
        suma += i;
    }

    cout << "La suma de los numeros pares entre 100 y 200 es " << suma << endl;

    return 0;
}