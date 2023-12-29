#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "misfunciones.h"

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
int menu ()
{
		int opcion=0;
		printf ("\n\nMenu\n");
		printf ("\n\n-------------------------");
		printf ("\n\n 1 Mayor y Menor ");		
		printf ("\n\n 2 Promedio");		
		printf ("\n\n 3 Sumar");
		printf ("\n\n 4 Resta");
		printf ("\n\n 5 Division");
		printf ("\n\n 6 Producto");
		printf ("\n\n 0 Salir");
		printf ("\n\n Opcion");
		scanf ("%d", &opcion);
		
		return opcion;
}
		

main()
{
int opc=0;
int primernumero=0; 
int segundonumero=0; 
int tercernumero=0;
int mayornumero=0;
int menornumero=0;
int resultadosuma=0;
int restultadoresta=0;
int resultadoproducto=0;
float resultadodiv=0.0;
float resultadoprom=0.0;

		printf ("\n\nIngrese los 3 numeros\n");
		scanf ("%d",&primernumero);
		scanf ("%d",&segundonumero);
		scanf ("%d",&tercernumero);
do
{ 
system ("cls");
opc=menu();
system ("cls");

printf ("\n\nPrimer numero %d", primernumero);
printf ("\n\nSegundo numero %d", segundonumero);
printf ("\n\nTercer numero %d", tercernumero);

	switch (opc)
	{
		case 1: 
		{
			printf ("\n\n 1 Mayor y Menor ");
			mayornumero=mayorde3(primernumero,segundonumero,tercernumero);
			menornumero=menorde3(primernumero,segundonumero,tercernumero);
			printf ("\n\n  Mayor %d ",mayornumero);
			printf ("\n\n  Menor %d ",menornumero);
			
			break;
		}
		case 2:
		{
			printf ("\n\n 2 Promedio");
			resultadoprom= prom3 (primernumero,segundonumero,tercernumero);
			printf ("\n\n Promedio %.2f ",resultadoprom);
			break;
		}
		case 3:
		{
			printf ("\n\n 3 Sumar");
			resultadosuma= sumar2(primernumero,segundonumero);
			resultadosuma= sumar2 (resultadosuma,tercernumero);
			printf ("\n\n suma %d ",resultadosuma);
			break;
		}	
		case 4:
		{
			printf ("\n\n 4	Resta");
			restultadoresta= restar2(primernumero,segundonumero);
			restultadoresta= restar2(restultadoresta,tercernumero);
			printf ("\n\n resta %d ",restultadoresta);
			break;
		}
		case 5:
		{
			printf ("\n\n 5	Division");
			resultadodiv=division2(primernumero,segundonumero);
			resultadodiv=division2(resultadodiv,tercernumero);
			printf ("\n\n Division %.2f ",resultadodiv);	
			break;
		}
		case 6:
		{
			printf ("\n\n 6	Producto");
			resultadoproducto=producto2(primernumero,segundonumero);
			resultadoproducto=producto2(resultadoproducto,tercernumero);
			printf ("\n\n Producto %d", resultadoproducto);
			break;
		}
		case 0:
		{
			printf ("\n\n Salir del programa ");
			break;
		}
		default:
		{
			printf ("\n\n Opcion incorrecta ");
			break;
		}
		
		
		
		
	}
	printf ("\n\n  ");
	system ("pause");
}
while (opc!=0);
}

		
