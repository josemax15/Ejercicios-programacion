#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int  main ()
{
        //clrscr();
 
        float aguacaida,promedio,cantidadagua=0,mayorlluvia,menorlluvia;
        char mayordia[10],menordia[10],dias[10];
        int cont=0,flag=0,dia;
 
        printf("Ingrese cantidad de dias que desea computar:");
        scanf("%d",&dia);
 
        while(cont<dia)
        {
 
                printf("Ingrese dia (dd/mm/aa):");
                scanf("%s",&dias);
                printf("Ingrese cant. de agua caida:");
                scanf("%f",&aguacaida);
 
                if(flag==0)
                {
 
                        strcpy(mayordia,dias);
                        strcpy(menordia,dias);
                        mayorlluvia = aguacaida;
                        menorlluvia = aguacaida;
 
                        flag=1;
                }
 
                if(aguacaida>=mayorlluvia)
                {
                        strcpy(mayordia,dias);
                        mayorlluvia = aguacaida;
                }
 
                if(aguacaida<=menorlluvia)
                {
                        strcpy(menordia,dias);
                        menorlluvia = aguacaida;
                }
 
                cantidadagua+=aguacaida; //cantidadagua = cantidadagua + aguacaida
 
                cont+=1;
 
        }
 
        promedio=cantidadagua/cont;
 
        printf("\nMayor lluvia %f el dia %s",mayorlluvia,mayordia);
        printf("\nMenor lluvia %f el dia %s",menorlluvia,menordia);
        printf("\nEl promedio de agua caida en %d dias fue %f",cont,promedio);
        getch();
}
