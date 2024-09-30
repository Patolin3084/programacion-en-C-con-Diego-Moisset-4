#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name1[31],name2[31];
    printf("Enter the first name: ");
    gets(name1);
    printf("Enter the second name: ");
    gets(name2);
    if(strlen(name1)>strlen(name2))
    {
        printf("The name %s is longer that the name %s",name1,name2);
    }
    else
    {
        printf("The name %s is longer that the name %s",name2,name1);
    }
    getch();
    return 0;
}
