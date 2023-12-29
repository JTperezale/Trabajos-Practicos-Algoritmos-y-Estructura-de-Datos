#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
 int calcularcuadrado (int num)
 {
 	int cuadra=0;
 	int impares=0;
	for (int c=1; impares!=num; c++) 
		{
			if (c%2!=0)
				{
				impares++;
				cuadra=cuadra+c;
				}
		}
	return cuadra;	
}

int N=0;
int numero=0;
int	cuadrado=0;


main()
{
system("cls");
	
		printf ("\n\nIngrese la cantidad de numeros");
		scanf ("%d",&N);
		

		for (int i=1; i<=N;i++)
		{
		
		printf ("\n\nIngrese el numero a calcular cuadrado");
		scanf ("%d",&numero);
		
		cuadrado= calcularcuadrado(numero);
		
		printf ("\n\nEl cuadrado del numero es %d", cuadrado);
		system("pause");
		
		
		}

		

}
	

