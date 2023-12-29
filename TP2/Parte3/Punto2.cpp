#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
int N;
float T;
main()
{
printf ("Ingrese la cantidad de GB del disco: ");
scanf ("%d",&N);
float T=((N*1024)/(float)700);
T= round(T);
printf ("La cantidad de discos es: %.2f",T);

}
