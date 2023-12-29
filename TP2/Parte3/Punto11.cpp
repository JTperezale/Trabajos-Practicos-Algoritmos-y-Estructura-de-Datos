#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/

main()
{
float numeroa= 0.0;
float numerob= 0.0;
float resultado= 0.0;
int   N=0;
int   opcion=0;
	
	do{
	
		system("cls");
		printf("menu\n\n");
		printf("\n1-multiplicacion");
		printf("\n2-division");
		printf("\n3-restas");
		printf("\n4-sumas");
		printf("\n5-salir");
		printf("\n\n opcion:");
		scanf("%d",&opcion);
		system("cls");
		
		switch(opcion)
		{
			case 1:
			{
				printf("MULTIPLICACION");
				printf("\n\ningrese factor a ");
				scanf("%f",&numeroa);
				printf("\n\ningrese factor b ");
				scanf("%f",&numerob);
				resultado=numeroa*numerob;
				printf("Resultado: %.2f",resultado);
				system ("pause");
				
				break;
			}
			case 2:
			{
				printf("DIVISION");
				printf("\n\ningrese dividendo  ");
				scanf("%f",&numeroa);
				printf("\n\ningrese divisor ");
				scanf("%f",&numerob);
				printf("Na=%.2f",numeroa);
				printf("Nb=%.2f",numerob);
					if (numerob==0)
						{printf("no se puede dividir por cero");
						system ("pause");
					}	
					else
					{
						resultado=numeroa / numerob;
					
						printf("\nResultado: %.2f", resultado);
						system ("pause");
						
					}
				
				break;
			}
			case 3:
			{
				printf("RESTAS");
				printf("\n\ningrese minuendo",numeroa);
				scanf ("%f",&numeroa);
				resultado = numeroa;
				for (int i=1;i<=5; i++)
				{
				printf("\n\ningrese sustraendo %d",i);
				scanf ("%f",&numerob);
				
				resultado = resultado - numerob;
				}
				
				printf("\nResultado: %.2f", resultado);
					system ("pause");
				break;
			}
			case 4:
			{
				printf("SUMAS");
				printf("\n\ningrese cantidad de numeros",N);
				scanf ("%d",&N);
				resultado=0.0;
				for (int i=1;i<=N; i++)
				{
				printf("\n\ningrese NUMERO %d de %d",i,N);
				scanf("%f",&numerob);
				resultado = resultado + numerob;
				}
					printf("\nResultado: %.2f", resultado);
				system ("pause");
				break;
			}
			case 5:
			{
				printf("HASTA LA PROXIMA	");
				break;
			}
		}//SWITCH
	}
	while(opcion!=5);
}
