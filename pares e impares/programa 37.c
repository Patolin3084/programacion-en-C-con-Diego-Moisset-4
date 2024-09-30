#include<stdio.h>
#include<conio.h>

int main()
{
    int x, n, nPares, nImpares, valor;
    x=1;
    nPares=0;
    nImpares=0;
    printf("Cantidad de numeros enteros que va a cargar:");
    scanf("%i",&n);
    while(x<=n)
    {
        printf("Ingrese numero entero:");
        scanf("%i",&valor);
        if(valor%2==0)
        {
            nPares=nPares+1;
        }
        if(valor%2==1)
        {
            nImpares=nImpares+1;
        }
        x=x+1;
    }
    printf("Numeros Pares:");
    printf("%i",nPares);
    printf("\n");
    printf("Numeros Impares:");
    printf("%i",nImpares);
    getch();
    return 0;
}
