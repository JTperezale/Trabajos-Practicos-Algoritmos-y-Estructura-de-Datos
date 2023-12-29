#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
main()
{

int numcuenta;
int n;
int dni;
float saldo, money;


printf ("cantidad cuentas a cargar:");
scanf ("%d",&n);

for (int i=1;i<=n; i++)

{
printf ("\n Ingrese datos del socio %d de %d\n" ,i, n);

printf ("Numero de cuenta:");
scanf ("%d",&numcuenta);

printf ("Numero de DNI:");
scanf ("%d",&dni);

printf ("Saldo:");
scanf ("%f",&saldo);


if (saldo > 0)
	{printf("Saldo acredor:$%.2f",saldo);
	money= (money+saldo);
	}
else 
	if (saldo<0)
		{printf("Saldo deudor:$%.2f",saldo);
		}
	else
		{printf("el saldo es cero");
		}
}

printf("\nEl total de los saldos acredores sumados: $%.2f", money);

}
