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
    int numEstudiantes;
    int notaMinimaAprobacion;
    int notas[numEstudiantes];
    int aprobados = 0, reprobados = 0, suma = 0;
    int promedio;

    cout << "Dame el numero de estudiantes ";
    cin >> numEstudiantes;
    cout << "Dame la nota minima para aprobar ";
    cin >> notaMinimaAprobacion;
    cout << "Dame las notas de los estudiantes " << numEstudiantes << endl;
    for (int i = 0; i < numEstudiantes; ++i)
    {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
        if (notas[i] >= notaMinimaAprobacion)
        {
            ++aprobados;
        }
        else
        {
            ++reprobados;
        }
    }

    promedio = suma / numEstudiantes;
    if (suma % numEstudiantes >= numEstudiantes / 2)
    {
        ++promedio;
    }
    cout << "Los alumnos aprobados son : " << aprobados << endl;
    cout << "Los alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}