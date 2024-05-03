/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos*/
#include <iostream>
using namespace std;

#define MAX_ESTUDIANTES 10

int main()
{
    int notas[MAX_ESTUDIANTES];
    int suma;
    int i;
    int promedio;

    cout << "Dame las notas de los estudiantes...." << MAX_ESTUDIANTES;
    for (i = 0; i < MAX_ESTUDIANTES; ++i)
    {
        cout << "Nota del estudiante " << i + 1;
        cin >> notas[i];
        suma += notas[i];
    }

    promedio = suma / MAX_ESTUDIANTES;
    cout << "El promedio general del aula es: " << promedio << endl;

    return 0;
}