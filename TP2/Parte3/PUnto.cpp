#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Joaquin Tomas Perez Ale 
	joaquinperezale@gmail.com*/
main()
{ 	int edad = 0;
	int sexo = 0;
	int patologia = 0;
	int mujeres	= 0;
	int totaldeencuestados = 0;
	int varonesGripeA =0;
	float porcentajeMujeres = 0.0;
	
	system ("cls");
	
	printf ("Edad:");
	scanf ("%d",&edad);
	
	while (edad != 0)
	{
			printf("sexo:");
			scanf ("%d",&sexo);
			
			printf ("patologia:");
			scanf ("%d", &patologia);
			totaldeencuestados=(totaldeencuestados+1);
			
			if (sexo==2)
				{	
					mujeres++;	 		   	 	
		   	 	}
		 	if ((sexo==1)&&(patologia==2))
 			   {varonesGripeA++;
 			   }
				   		printf ("Edad:");
	   scanf ("%d",&edad);
	      		   
	}//ciclo
	
	if 	(totaldeencuestados>0)
	{
	
	 porcentajeMujeres = (float)(mujeres*100)/totaldeencuestados;
	
					  printf("\n\n");
				   	  printf("varones con gripe a: %d", varonesGripeA);
		   		  	  printf("\n\n");
					printf("porporcentaje mujeres: %.2f", porcentajeMujeres   );
	}
	else       {
   	  printf("\n\nNo se encuestaron personas");
   }
}
