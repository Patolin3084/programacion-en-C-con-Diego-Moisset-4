#include<stdio.h>
#include<conio.h>

int main()
{
    int f, valor, mult3, mult5;
    mult3=0;
    mult5=0;
    for(f=1; f<=10; f++)
    {
        printf("Ingrese valor:");
        scanf("%i",&valor);
        if(valor%3==0)
        {
            mult3++;
        }
        if(valor%5==0)
        {
            mult5++;
        }
    }
    printf("Cantidad de valores multiplo de 3:");
    printf("%i",mult3);
    printf("\n");
    printf("Cantidad de valores multiplo de 5:");
    printf("%i",mult5);
    getch();
    return 0;
}
