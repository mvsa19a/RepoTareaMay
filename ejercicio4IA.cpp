/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream> 
using namespace std;

int main() { int notas[10]; int suma = 0;

cout << "Ingrese las notas de los 10 estudiantes:\n"; for (int i = 0; i < 10; ++i) { cin >> notas[i]; suma += notas[i]; }

int promedio = suma / 10;

cout << "El promedio general de la seccion es: " << promedio;

return 0; }