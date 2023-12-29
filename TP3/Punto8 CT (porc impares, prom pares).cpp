#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
int calcpares (int pares,int totalpares)
		{
			float prom=0.0;
			
			if (pares!=0)
				{
				prom=(float)(totalpares/pares);
				return prom;
				}
			else
			{
			printf ("\n\nno hay numeros pares");
			}
		}
	

int N=0;
float n=0.0;
float prom=0.0;
float porc=0.0;
int	num=0;
int resto=0; 
int pares=0;
int totalpares=0;
int impares=0;

main()
{
system("cls");
	
		printf ("\n\nIngrese la cantidad de numeros");
		scanf ("%d",&N);
		
		for (int i =1; i<=N;i++)
		{
				printf ("\n\nIngrese el numero");
				scanf ("%f",&n);
				num=n;
				resto=n-num;
				
				if (resto!=0)
				{
				printf ("\n\n El numero no es entero");	
				}
				
				else
				{
					if (num%2==0)
					{
					pares++;
					totalpares=totalpares+num;
					}
					else
					{
					impares++;
					}
		
				}//else

									
		}//for
		
		prom=calcpares (pares,totalpares);
		printf ("\n\n El promedio de pares es %.2f", prom);
		
		porc=(float)(impares*100)/N;
		printf ("\n\n El porcentaje es de %.2f", porc);
}

