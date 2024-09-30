#include<stdio.h>
#include<conio.h>

int main()
{
    int value;
    do {
        printf("Enter a value between 0 and 999 (0 ends): ");
        scanf("%i",&value);
        if(value>=100)
        {
            printf("Has 3 digits");
        }
        else
        {
            if(value>=10)
            {
                printf("Has 2 digits");
            }
            else
            {
                printf("Has 1 digit");
            }
        }
        printf("\n");
    }while(value!=0);
    getch();
    return 0;
}
