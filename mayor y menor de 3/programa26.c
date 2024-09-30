#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese el 1er valor:"),
    scanf("%i", &num1);
    printf("Ingrese el 2do valor:"),
    scanf("%i", &num2);
    printf("Ingrese el 3er valor:"),
    scanf("%i", &num3);
    if(num1<num2 && num2<num3)
    {
        printf("El numero menor es:");
        printf("%i", num1);
        printf("\n");
    }
    else
    {
        if(num2<num3)
        {
            printf("El numero menor es:");
            printf("%i", num2);
            printf("\n");
        }
        else
        {
            printf("El numero menor es:");
            printf("%i", num3);
            printf("\n");
        }
    }
    if(num1>num2 && num2>num3)
    {
        printf("El numero mayor es:");
        printf("%i", num1);
        printf("\n");
    }
    else
    {
        if(num2>num3)
        {
            printf("El numero mayor es:");
            printf("%i", num2);
            printf("\n");
        }
        else
        {
            printf("El numero mayor es:");
            printf("%i", num3);
            printf("\n");
        }
    }
    getch();
    return 0;
}
