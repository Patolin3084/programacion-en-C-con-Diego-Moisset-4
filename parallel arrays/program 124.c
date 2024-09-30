#include<stdio.h>
#include<conio.h>

void load(char names[5][41], int ages[5])
{
    for(int r=0;r<5;r++)
    {
        printf("Enter the name: ");
        gets(names[r]);
        printf("Enter the age: ");
        scanf("%i",&ages[r]);
        fflush(stdin);
    }
}

void legalAge(char names[5][41], int ages[5])
{
    printf("People of legal age \n");
    for(int r=0;r<5;r++)
    {
        if(ages[r]>=18)
        {
            printf("%s\n",names[r]);
        }
    }

}

void main()
{
    char names[5][41];
    int ages[5];
    load(names,ages);
    legalAge(names,ages);
    getch();
    return 0;
}
