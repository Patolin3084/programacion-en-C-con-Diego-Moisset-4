#include<stdio.h>
#include<conio.h>

int main()
{
    int v1,v2;
    printf("Ingrese primer valor:");
    scanf("%i",&v1);
    printf("Ingrese segundo valor:");
    scanf("%i",&v2);
    if (v1>v2)
    {
        printf("El valor mayor es %i",v1);
    }
    else
        printf("El valor mayor es %i",v2);
    getch();
    return 0;
}
