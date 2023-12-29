#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
float TotaldeVentas,TotaldeGastos,IngresoBruto,GOP;

main()
{
	system ("cls");
printf ("Ingrese Total de Ventas del semestre: ");
scanf ("%f",&TotaldeVentas);
printf ("Ingrese Total de Gastos del semestre: ");
scanf ("%f",&TotaldeGastos);
IngresoBruto = (TotaldeVentas-TotaldeGastos);
	if (IngresoBruto>=0)
	{	GOP = (IngresoBruto-IngresoBruto*0.05);
 			if (GOP == 0)
 				{printf ("No hubo perdidas ni ganancias");
 				} 
			else{printf ("las ganancias son: %.2f", GOP);
				}
	}
	else {printf ("las perdidas son: %.2f", IngresoBruto);
				}
	

	system("pause");
}
