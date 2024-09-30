#include<stdio.h>
#include<conio.h>

int main()
{
    int x, multiplo, termino, valor;
    x=8;
    termino=0;
    while(x<=500)
    {
        printf("%i",x);
        printf(" - ");
        x=x+8;
        termino=termino+1;
    }
    printf("Cantidad de multiplos de 8:");
    printf("%i",termino);
    getch ();
    return 0;
}
