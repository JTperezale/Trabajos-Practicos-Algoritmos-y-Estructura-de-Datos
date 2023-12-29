#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
const int DiasLaborales=5;

float calcularporcentaje (int parte, int todo)
			{
				float porcentaje=0.0;
				
				if (todo!=0)
				{
				porcentaje=(float)(parte*100)/todo;
				}
				
				return porcentaje;
			}

	int	M=0;
	int respuesta=0;

	
	int B=0;
	int B1=0;
	int B2=0;
	int B3=0;
	
	int D=0;
	int D1=0;
	int D2=0;
	int D3=0;
	
	float P1=0.0;
	float P2=0.0;	
	float P3=0.0;
	

	

main()
{
		system("cls");
	for (int dia=1;dia<=DiasLaborales;dia++)
	{
		system("cls");
		printf ("Hubo producción en el dia %d?",dia);
		scanf ("%d",&respuesta);
		
		if (respuesta==1)
		{
			printf("produccion del dia %d",dia);
			printf ("\n\nIngrese el numera de maquina");
			scanf ("%d",&M);
			while (M!=0)
			{
				printf("Envases producidos:");
				scanf("%d",&B);
				
				printf("Envases desechados:");
				scanf("%d",&D);
				
				printf ("\n\n");
				
				switch (M)
					{
						case 1: 
								{
									B1=B1+B;
									D1=D1+D;
									break;
								}
						case 2: 
								{
									B2=B2+B;
									D2=D2+D;
									break;
								}
						case 3: 
								{
									B3=B3+B;
									D3=D3+D;
									break;
								}
					}
				printf ("\n\nIngrese el numera de maquina");
				scanf ("%d",&M);
			}
		}
		
		system("pause");
	}

		P1= calcularporcentaje(D1,B1);
		P2= calcularporcentaje(D2,B2);
		P3= calcularporcentaje(D3,B3);
				
		printf ("\n\nResultados de la semana");
		printf ("\n\nResultados de la semana Maquina 1:");
		printf ("\n\nEnvases producidos maquina 1: %d",B1);
		printf ("\n\nEnvases desechados maquina 1: %d",D1);
		printf ("\n\nPorcentaje de envases maquina 1: %.2f", P1);
		
		printf ("\n\nResultados de la semana Maquina 2:");
		printf ("\n\nEnvases producidos maquina 2: %d",B2);
		printf ("\n\nEnvases desechados maquina 2: %d",D2);
		printf ("\n\nPorcentaje de envases maquina 2: %.2f", P2);
		
		printf ("\n\nResultados de la semana Maquina 3:");	
		printf ("\n\nEnvases producidos maquina 3: %d",B3);	
		printf ("\n\nEnvases desechados maquina 3: %d",D3);
		printf ("\n\nPorcentaje de envases maquina 3: %.2f", P3);
		system("pause");
}
	

