Proceso ejercicio4
	
	Definir MAX_ESTUDIANTES como Entero;
    Definir notas como  Entero;
    Definir suma como Entero;
    Definir i como Entero;
    Definir promedio como Entero;
	
    MAX_ESTUDIANTES <- 10;
	
    Escribir "Dame las notas de los estudiantes....", MAX_ESTUDIANTES;
	Para i <- 0 Hasta MAX_ESTUDIANTES Con Paso -1 Hacer
		secuencia_de_acciones
	FinPara
    
        Escribir "Nota del estudiante ", i + 1;
        Leer notas;
        suma <- suma + notas;
	
    promedio <- suma / MAX_ESTUDIANTES;
    Escribir "El promedio general del aula es: ", promedio;
FinProceso
