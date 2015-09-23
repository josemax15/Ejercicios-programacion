# include <stdio.h>

int main ()
{
        
        int a,b,c,d,mayor;
 
        printf("\nIngrese 4 numeros:\n\n");
        scanf("%d %d %d %d ",&a,&b,&c,&d);
 
        if(a>b&&a>c&&a>d)mayor = a;
        if(b>a&&b>c&&b>d)mayor = b;
        if(c>a&&c>b&&c>d)mayor = c;
        if(d>a&&d>b&&d>c)mayor = d;

        printf("\nEl mayor de los 4 numeros es el %d",mayor);
        getch();
}
