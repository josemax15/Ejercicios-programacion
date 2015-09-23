#include <stdio.h>
//ingresar 5 numeros y calcular su media
int main ()
{
 int num, suma=0, prom=0, cont=0;
 
 while (cont<5)
{
	printf("Ingrese numero: ");
	scanf ("%d", &num);
	
	suma=suma+num;
	
	cont= cont+1;
}	
	prom=suma/cont;
	printf("\nLa suma de los numeros son: %d \nEl promedio es: %d", suma, prom);

	return 0;
}
