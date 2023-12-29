#include <stdlib.h>
#include <stdio.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com
	
	Comision 1K05
	TRABAJO CLASE TEÓRICA - VECTORES PARALELOS (ORDENAMIENTO - BÚSQUEDA)*/

const int lugares = 50;

void cargavector(int vec[lugares], int tope,float vector1[lugares])
{
	for (int i=0; i<tope; i++)
	{
		printf("\nIngrese el legajo: ");
		scanf("%d", &vec[i]);
		printf("\nIngrese el promedio: ");
		scanf("%f", &vector1[i]);
	}
}
void mostrarvector(int v[lugares], int N,float vector1[lugares])
{
	for (int i=0; i<N; i++)
	{
		printf("\nnumero de legajo%d  ", v[i]);
		printf("\nnumero de legajo%d  ", vector1[i]);
	}
}
float mayor
main()
{
	system("color 0A");
	int vector[lugares] = {0}; 
	float vector1[lugares] = {0};
	int N = 0;
	printf("Ingrese Numero de alumnos: ");
	scanf("%d", &N);
	
	printf("\n\nIngreso de datos del vector\n\n");
	cargavector(vector, N,vector1);
	mostrarvector(vector, N,vector1);
	ordenarvector(vector, N,vector1);
	mostrarvector(vector, N,vector1);
}
	
