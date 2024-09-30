#include<stdio.h>
#include<conio.h>

void calculateP(int side)
{
    int perimeter=side*4;
    printf("The perimeter of a square with side %i is: %i",side,perimeter);
}

void calculateS(int side)
{
    int surface=side*side;
    printf("The surface of a square with side %i is: %i",side,surface);
}


int main()
{
    char x;
    for(x=10;x<=20;x++)
    {
        calculateP(x);
        printf("\n");
        calculateS(x);
        printf("\n");
        printf("-------------------------------------------------------\n");
    }
    getch();
    return 0;
}
