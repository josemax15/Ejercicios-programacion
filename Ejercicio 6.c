#include <stdio.h>

int main ()
{
	
	int num1, num2, resta;
	
	printf("Ingrese numero1: ");
	scanf("%d", &num1);
	
	printf("Ingrese numero2: ");
	scanf("%d", &num2);
	
	resta= num1-num2;
	system ("cls");
	
	if(resta<0)
	{
		printf("El resultado de la resta es %d y es negativo", resta);
	}
	else
	{
		printf("El resultado de la resta es %d y es positivo", resta);
	}
	
}
