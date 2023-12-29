#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
int calchoras (int dias)
	{	
		int horas=0;
		horas= dias*24;
		return horas;
	}
int calcminutos (int horas)
	{
		int minutos=0;
		minutos=horas*60;
		return minutos;
	}
int	calcsegundos (int minutos)
	{
		int segundos=0;
		segundos=minutos*60;
		return segundos;
	}

int D=0;
int horas=0;
int	minutos=0;
int segundos=0; 

main()
{
system("cls");
	
		printf ("\n\nIngrese la cantidad de dias");
		scanf ("%d",&D);
		
		if (D <100)
		{
		printf ("\n\nIngrese la cantidad de dias tiene que ser mayor a 100");
		}
		
		else 
		{
			horas=calchoras(D);
			printf ("\n\n La cantidad de horas %d", horas);
			minutos= calcminutos(horas);
			printf ("\n\n La cantidad de minutos %d", minutos);
			segundos= calcsegundos(minutos);
			printf ("\n\n La cantidad de segundos %d", segundos);
		}
}
