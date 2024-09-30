#include<stdio.h>
#include<conio.h>
#include<string.h>

void load(char names[5][41])
{
    for(int r=0;r<5;r++)
    {
        printf("Enter the name of the person: ");
        gets(names[r]);
    }
}

void print(char names[5][41])
{
    printf("Full list of names \n");
    for(int r=0;r<5;r++)
    {
        printf("%s\n",names[r]);
    }
}

void order(char names[5][41])
{
    char aux[41];
    for(int k=0;k<4;k++)
    {
        for(char r=0;r<4-k;r++)
        {
            if(strcmp(names[r],names[r+1])>0)
            {
                strcpy(aux,names[r]);
                strcpy(names[r],names[r+1]);
                strcpy(names[r+1],aux);
            }
        }
    }
}

void main()
{
    char names[5][41];
    load(names);
    print(names);
    order(names);
    print(names);
    getch();
    return 0;
}
