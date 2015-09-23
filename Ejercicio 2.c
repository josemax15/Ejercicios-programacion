#include<stdio.h>
//la suma de 2 numeros
int main ()
{
 int i, num, res=0;
 
	for (i=0; i<2; i++)
{
	printf("Ingrese num: ");
	scanf ("%d", &num);
	
	res=res+num;
}
	printf("\nLa suma de los numeros es: %d", res);
	
	return 0;
}
