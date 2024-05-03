/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int longitud;
    int i;

    cout << "Damela longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);
    vector<int> vectorSuma(longitud);

    cout << "Dame los elementos del primer vector: ";
    for (i = 0; i < longitud; ++i)
    {
        cin >> vector1[i];
    }
    cout << "Dame los elementos del segundo vector: ";
    for (i = 0; i < longitud; ++i)
    {
        cin >> vector2[i];
    }

    cout << "La suma de los dos vectores es: ";
    for (int i = 0; i < longitud; ++i)
    {
        vectorSuma[i] = vector1[i] + vector2[i];
        cout << vectorSuma[i] << " ";
    }
    cout << endl;

    return 0;
}