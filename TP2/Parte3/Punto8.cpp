#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
main()
{

int N, ent;
float alfa, beta;

printf("ingrese la cantidad de numeros:");
scanf("%d",&N);

for (int i=1;i<=N; i++)
{

printf ("\n Ingrese datos del numero %d de %d\n" ,i, N);
printf("ingrese un numero:");
scanf("%f",&alfa);

ent=alfa;
beta=alfa-ent;

	if	(beta==0)
	{
		printf("Es un numero entero:");
	}
	else 
	{
		printf("Es un numero decimal:");
	}
}
}

