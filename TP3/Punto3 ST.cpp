#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/

	int a=0;
	int	b=0;
	int may=0;
	int men=0;
	int sup=0;
	int	circ=0;
	
void	calmaymen(int &may, int&men)
{
		if (a<b)
		{
		
		printf ("El mayor es %d ",b);	
		printf ("El menor es %d ",a);	
		may=b;
		men=a;
		}
		
		else
		{
		
		printf ("El mayor es %d ",a);	
		printf ("El menor es %d ",b);
		may=a;
		men=b;
		}
}
void 	areacuad(int may, int &sup)
	{
		sup=may*may;
	}	
	
void areacirc(int men, int &circ)
	{
		circ=3.14*men*men;
	}



main()
{


	
	printf ("Ingrese el numera A");
	scanf ("%d",&a);
	printf ("Ingrese el numera B");
	scanf ("%d",&b);
	
	if	(a==b)
	{	
		printf ("Los numeros son iguales");
	}
	else
	{
		calmaymen(may,men);
		areacuad(may,sup);
		printf ("\nLa superficie del cuadrado es: %d \n", sup);
		areacirc(men,circ);
		printf ("\nLa superficie del circulo es: %d \n", circ);
	}

}
