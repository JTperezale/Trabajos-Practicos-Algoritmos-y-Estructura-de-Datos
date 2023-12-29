#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com
	
	Comision 1K05
	Trabajo CLASE TEÓRICA CODIFICACIÓN PARTE 1*/
	

main()
{int N,M;
float sueldo;
printf ("Ingrese la cantidad de horas trabajadas ");
scanf ("%d",&N);
printf ("Ingrese valor de la hora ");
scanf ("%d",&M);
if (N<=0)
{
	printf ("No trabajo ");
}
else
{
	if (N>60)
	{
		sueldo=N*M;
		sueldo=sueldo+(sueldo*0.05);
	}
	else
	{
		sueldo=N*M;
		sueldo=sueldo*0.86;
	}
}


printf ("El sueldo es: %.2f",sueldo);

}
