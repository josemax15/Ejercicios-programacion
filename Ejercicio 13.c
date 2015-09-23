#include<stdio.h>

//Escribir un programa que muestre del 0 a 100 q muestre los impares y los pares

int main ()
{
	int i, cont=0;
printf("A continuacion numeros pares del 0 al 100.\n");

	for(i=0; i<=100; i++)
	//for(i=100; i>=0; i--) //orden descendente
	{
		
     	if(i%2==0)
	{
	printf("\nNumero:   PAR %d", i);
	
	// cont= cont+1;
	}
		  	
	}
	//printf("\n\nHay un total de %d numeros pares", cont);
}
