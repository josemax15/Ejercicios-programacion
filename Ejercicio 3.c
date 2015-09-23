#include <stdio.h>
#include <ctype.h>
//acciones: 1_limpiar pantalla; 2_asigna 2 variable int !=0;
//3_producto de los num; 4_mostrar resultado; 5_obtener cuadrado de num1 y mostrar.-
int main ()
{
 int num1=0, num2=0, prod, pote;
 
	printf("Ingrese el num1: ");
	scanf ("%d", &num1);	
	num1= validar (num1);
	
	printf("\nIngrese num2: ");
	scanf ("%d", &num2);
	num2= validar (num2);
	
	system ("cls");
	
	prod= producto (num1, num2);

	printf("El producto es: %d", prod);
	
	pote= Pot_Cuad (num1);
	
	printf ("\nEl cuadrado de num1 es: %d", pote);
}

//FUNCIONES ABAJO

int producto (int num1, int num2)//prototipo
{
	int prod; //funcion
	
	prod= num1/num2;
	
	return prod;
}

int Pot_Cuad (int num)
{
	int cuad;
	
	cuad=num*num;
	
	return cuad;
}

int validar (int num)
{
	while(num ==0)
		{
	     printf("\nIngrese un digito mayor a 0: ");
         scanf ("%d", &num);
         //system ("pause");
		}
	return num;
}
	
    
