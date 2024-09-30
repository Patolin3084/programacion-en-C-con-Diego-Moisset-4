#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Ingrese el primer valor:");
    scanf("%i",&num1);
    printf("Ingrese el segundo valor:");
    scanf("%i",&num2);
    if(num1>num2)
    {
        printf("el numero mayor es:");
        printf("%i",num1);
    }
    else
    {
        printf("el numero mayor es:");
        printf("%i",num2);
    }
    getch ();
    return 0;
}
