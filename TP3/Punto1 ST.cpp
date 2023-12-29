#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
	int dentro=0;
	int fuera=0;
	
void ProcesadorNumeros(int LimInf,int LimSup, int N)
{

	
	if ((N>=LimInf)&&(N<LimSup))
	{
		dentro++;
	}
	else
		fuera++;
		
	printf("\n\n Dentro: %d", dentro);
	printf("\n\n Fuera: %d \n\n", fuera);
	
}

main()
{
	int A=0;
	int B=0;
	int N=0;
	int n=0;

	
	system("cls");
	
	printf ("Limite A");
	scanf ("%d",&A);
	
	printf ("Limite B");
	scanf ("%d",&B);
	
	printf ("La cantidad de numeros");
	scanf ("%d",&N);
	
	for (int i=1;i<=N;i++)
	{
		printf ("Ingrese Numero %d de %d ",i,N);
		scanf ("%d",&n);
		ProcesadorNumeros (A,B,n);
	}
	
	printf("\n\n");
	system("pause");
}
