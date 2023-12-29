#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/

void	multiplos(int mult)
{
		int multiplo=0;
		for (int c=1;c<=10;c++)
		{
		multiplo = mult *c;
		printf ("Multiplo %d de 10: %d",c,multiplo);
		}
}

void 	submultiplos(int submult)
{

		int sub =0;
		for (int c=1;c<=submult;c++)
		{
			if(submult%c==0)
			sub++;
		
		}
		printf ("La cantidad de submultiplos %d ",sub);
}
	


main()
{

	int N=0;
	int	X=0;
	
	printf ("La cantidad de numeros");
	scanf ("%d",&N);
	
	for (int i=1;i<=N;i++)
	{
		printf ("Ingrese Numero %d de %d ",i,N);
		scanf ("%d",&X);
		
		if((X>0)&&(X<150))
		
		multiplos(X);
		
		if ((X>=150)&&(X<301))
		
		submultiplos(X);
		
	}
}
