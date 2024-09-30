#include<stdio.h>
#include<conio.h>
/*
int main()
{
    int n, x, suma;
    n=25;
    x=1;
    suma=11;
    while(x<=n)
    {
        printf("%i",suma);
        printf(" - ");
        suma=suma+11;
        x=x+1;
    }
    getch();
    return 0;
}*/

int main()
{
    int x,termino;
    x=1;
    while(x<=25)
    {
        termino=x*11;
        printf("%i",termino);
        printf(" - ");
        x=x+1;
    }
    getch();
    return 0;
}
