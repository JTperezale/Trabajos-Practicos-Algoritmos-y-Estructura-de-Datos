#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
float X1,X2,Y1,Y2,XT,YT,D;

main()
{
printf ("Ingrese la cordenada x del punto 1: ");
scanf ("%f",&X1);
printf ("Ingrese la cordenada y del punto 1: ");
scanf ("%f",&Y1);
printf ("Ingrese la cordenada x del punto 2: ");
scanf ("%f",&X2);
printf ("Ingrese la cordenada y del punto 2: ");
scanf ("%f",&Y2);
XT = (X2-X1);
YT = (Y2-Y1);
D = sqrt(pow(XT,2)+ pow(YT,2));

printf ("La distancia es:%.2f",D);

}
