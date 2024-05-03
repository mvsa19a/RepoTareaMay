/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/
#include <iostream>
using namespace std;

int main()
{
    int notas[8];
    int suma = 0;
    int aprobados = 0;
    int reprobados = 0;

    cout << "Ingrese las notas de los 8 estudiantes:\n";
    for (int i = 0; i < 8; ++i)
    {
        cin >> notas[i];
        suma += notas[i];
        if (notas[i] >= 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }

    int promedio = suma / 8;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio;

    return 0;
}