#include <stdio.h>

int main ()

{
	int num, cuad;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	if (num>0)
	{
		cuad=num*num;
		printf("El cuadrado del numero ingresado es: %d", cuad);
	}
	else
	{
		printf("Error el numero debe ser mayor a 0");
	}
}
