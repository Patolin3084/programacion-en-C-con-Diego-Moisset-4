#include<stdio.h>
#include<conio.h>

void printBigger(int v1,int v2)
{
    if (v1>v2)
    {
        printf("The bigger is %i",v1);
    }
    else
    {
        printf("The bigger is %i",v2);
    }
}

int main()
{
    int value1,value2;
    printf("Enter first valor: ");
    scanf("%i",&value1);
    printf("Enter second valor: ");
    scanf("%i",&value2);
    printBigger(value1,value2);
    getch();
    return 0;
}
