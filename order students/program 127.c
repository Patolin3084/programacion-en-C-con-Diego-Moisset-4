#include<stdio.h>
#include<conio.h>
#include<string.h>

void load(char name[5][41],int grade[5])
{
    for(int r=0;r<5;r++)
    {
        printf("Enter the name of student: ");
        gets(name[r]);
        printf("Enter the grade of the student: ");
        scanf("%i",&grade[r]);
        fflush(stdin);
    }
}

void order(char name[5][41],int grade[5])
{
    char auxname[41];
    int auxgrade;
    for(int k=0;k<4;k++)
    {
        for(int r=0;r<4-k;r++)
        {
            if(grade[r]<grade[r+1])
            {
                auxgrade=grade[r];
                grade[r]=grade[r+1];
                grade[r+1]=auxgrade;
                strcpy(auxname,name[r]);
                strcpy(name[r],name[r+1]);
                strcpy(name[r+1],auxname);
            }
        }
    }
}

void print(char name[5][41],int grade[5])
{
    printf("list of students ordered by grade in descending order\n");
    for(int r=0;r<5;r++)
    {
        printf("%s - %i\n",name[r],grade[r]);
    }
}

void main()
{
    char name[5][41];
    int grade[5];
    load(name,grade);
    order(name,grade);
    print(name,grade);
    getch();
    return 0;
}
