#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese 1er valor:");
    scanf("%i", &num1);
    printf("Ingrese 2do valor:");
    scanf("%i", &num2);
    printf("Ingrese 3er valor:");
    scanf("%i", &num3);
    if (num1<10 && num2<10 && num3<10)
    {
        printf("Los 3 valores son menores que 10");
    }
    getch();
    return 0;
}
