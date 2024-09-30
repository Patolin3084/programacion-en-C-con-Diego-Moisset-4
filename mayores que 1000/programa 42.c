#include<stdio.h>
#include<conio.h>

int main()
{
    int f, n, valor, cantidad;
    cantidad=0;
    printf("Cantidad de valores a cargar:");
    scanf("%i",&n);
    for(f=1; f<=n; f++)
    {
        printf("Ingrese valor:");
        scanf("%i",&valor);
        if(valor>=1000)
        {
            cantidad++;
        }
    }
    printf("Cantidad de valores mayores o iguales a 1000:");
    printf("%i",cantidad);
    getch();
    return 0;
}
