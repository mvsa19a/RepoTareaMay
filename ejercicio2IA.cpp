/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 100; i >= 1; i -= 2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}