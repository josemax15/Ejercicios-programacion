# include <stdio.h>

int main ()

{
 
        int a,b,c,d,e,mayor,menor;
 
        printf("\nIngrese 5 numeros:\n\n");
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 
        if(a>b&&a>c&&a>d&&a>e)mayor = a;
        if(b>a&&b>c&&b>d&&b>e)mayor = b;
        if(c>a&&c>b&&c>d&&c>e)mayor = c;
        if(d>a&&d>b&&d>c&&d>e)mayor = d;
        if(e>a&&e>b&&e>c&&e>d)mayor = e;
 
        if(a<b&&a<c&&a<d&&a<e)menor = a;
        if(b<a&&b<c&&b<d&&b<e)menor = b;
        if(c<a&&c<b&&c<d&&c<e)menor = c;
        if(d<a&&d<b&&d<c&&d<e)menor = d;
        if(e<a&&e<b&&e<c&&e<d)menor = e;
 
        printf("\nEl mayor de los 5 numeros es el %d y el menor es el %d",mayor,menor);
        getch();
}
