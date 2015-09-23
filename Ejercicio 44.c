#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main()
{
        float altura,mayoraltura=0;
        char nombre[20],mayornombre[20],seguir = 's';
        int flag=0;
 
        //clrscr();
 
        do
        {
                printf("\nNombre:"),
                scanf("%s",&nombre);
                printf("Altura:");
                scanf("%f",&altura);
 
                if(flag==0)
                {
                        mayoraltura = altura;
                        strcpy(mayornombre,nombre);
                        flag=1;
                }
                        if(altura>= mayoraltura)
                {
                        mayoraltura = altura;
                        strcpy(mayornombre,nombre);
 
                }
 
                printf("\nDesea continuar? s/n\n");
                seguir = getch();
 
                while(seguir!= 's' && seguir!= 'n')
                {
                printf("\nERROR, reingrese respuesta s/n ?\n");
                seguir = getch();
                }
        }while(seguir == 's');
                printf("\nEl mas alto es %s mide %.2f",mayornombre,mayoraltura);
                getch();
}
