#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/

main()
{

float dinero=0;
float regalo=0;
int edad=0;

system ("cls");
edad =12;
dinero=10;
regalo=10;
printf("\n\n)");


do
{
	edad++;
	regalo=regalo*2;
	dinero=dinero+regalo;
}

while(regalo<=1000);

printf("\n\n edad final: %d", edad);
printf("\n\n total recibido %.2f", dinero);

system("pause");
}
