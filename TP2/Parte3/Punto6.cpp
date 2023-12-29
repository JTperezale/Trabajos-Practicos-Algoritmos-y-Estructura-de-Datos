#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
	
main()
{ 	int edad = 0;
	int sexo = 0;
	int deporte = 0;
	int numerosocio;
	int futbolistas= 0;
	int varones=0;
	int mujeres = 0;
	int jovenes= 0;
	float promedad = 0.0;
	float cantidadsocios =0;	
	
	system ("cls");
	
	printf ("Numero de socio:");
	scanf ("%d",&numerosocio);

	
	while (numerosocio!= 0)
	
	{		printf ("Edad:");
			scanf ("%d",&edad);
			promedad = (promedad + edad);
			cantidadsocios++;
			
	
				if (edad<16)
				{
				jovenes++;
				}
				
			printf ("Deporte:");
			scanf ("%d", &deporte);  
			 
			printf("Sexo:");
			scanf ("%d",&sexo);
				if(sexo==1)
				{
				varones=varones+1
			;
				};
				if(sexo==2)
				{
				mujeres=mujeres+1;
				} ;

 			   
 			if ((edad<51)&&(edad>29)&&(deporte==1))
				{
				futbolistas++;
				}	   
			
			printf ("Numero de socio:");
			scanf ("%d",&numerosocio);
	}//ciclo
	
	
	{				
	
					  printf("\n\n");
				   	  printf("La cantidad de socios de entre 30 y 50 que juegan futbol es de: %d", futbolistas);
		   		  	  printf("\n\n");
 					  printf ("Cantidad socias Mujeres: %d", mujeres);
 					  printf("\n\n");
 					  printf ("Cantidad socios Hombres: %d", varones);
 					  printf("\n\n");
 					  printf ("Cantidad socios menores de 16: %d", jovenes);
 					  printf("\n\n");
 					  
 					if (cantidadsocios!=0)
					   {
					   promedad=(promedad/cantidadsocios);
					   	printf ("Promedio de edad: %.2f",promedad);
					   }
 					  
 					  	
 					else {	 printf ("Cantidad socios es cero");
 					}
 					  
 						
 					  
 					
	}
	
	
	printf("\n\n");

}

