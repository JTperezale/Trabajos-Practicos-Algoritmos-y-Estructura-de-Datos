
#include<stdio.h>
#include<stdlib.h>
#include <string.h>



/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com
	
	Comision 1K05
	EJERCICIOS A DESARROLLAR - CLASE TEÓRICA CODIFICACIÓN PARTE 1*/
	
main()
{
	int Y;
	int X;
	
	printf("ingrese X:");
	scanf("%d",&X);
	
	printf("ingrese Y:");
	scanf("%d",&Y);
	
			if ((X>3)&&(X<-3))
			{
			printf("\nFuera del cuadrado");
			}
			else
			{
				if ((Y>3)&&(Y<-3))
				{
				printf("\nFuera del cuadrado");
				}
				else 
				{
				printf("\nDentro del cuadrado");
				}
			}
}

	
