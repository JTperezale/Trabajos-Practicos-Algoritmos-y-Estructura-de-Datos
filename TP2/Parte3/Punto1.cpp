#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
int a,b,c;
float prom;

main()
{
	printf ("Ingrese Nota Promedio de parciales");
	scanf ("%d",&a);
	printf ("Ingrese Nota Promedio de trabajos integradores");
	scanf ("%d",&b);
	printf ("Ingrese Nota de trabajo final.");
	scanf ("%d",&c);
	prom=(a*0.4+b*0.2+c*0.4);
	printf ("El valor del promedio es: %f",prom); 
}
