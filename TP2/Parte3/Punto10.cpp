#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/

main()
{
int   	N=0;
float	numero=	0;
int 	entera=0;


float 	resto=0;
int 	resto2 =0;
int		Ndiv=0;

system("cls");

printf("\n\ningrese cantidad de numeros");
scanf ("%d",&N);
for (int i=1;i<=N;i++)
{

	printf("\n\ningrese numero %d de %d ",i,N);
	scanf("%f", &numero);
	
	entera=numero;
	resto=numero-entera;
	
	if	(resto==0)
	{
		Ndiv=0;
		
			printf("el numero es entero");
		
				for(int c=1; c<=numero ;c++)
					{
					if (entera%c==0)
						{
							Ndiv++;
						}
				
					}
			
				
		if 	(Ndiv==2)
			printf("\n\nel numero es primo");
			
		else
			printf("el numero es no es primo ");
		
	}	
	else 
	printf("el numero no es entero");
	
	

}




printf("\n\n");
system("pause");
}
