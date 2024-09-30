#include<stdio.h>
#include<conio.h>
#include<string.h>

void load(char name[5][41],int population[5])
{
    for(int r=0;r<5;r++)
    {
        printf("Enter the name of the country: ");
        gets(name[r]);
        printf("Enter the population of this country: ");
        scanf("%i",&population[r]);
        fflush(stdin);
    }
}

void orderAlphabetically(char name[5][41],int population[5])
{
    char auxname[41];
    int auxpopulation;
    for(int k=0;k<4;k++)
    {
        for(int r=0;r<4-k;r++)
        {
            if (strcmp(name[r],name[r+1])>0)
            {
                strcpy(auxname,name[r]);
                strcpy(name[r],name[r+1]);
                strcpy(name[r+1],auxname);
                auxpopulation=population[r];
                population[r]=population[r+1];
                population[r+1]=auxpopulation;
            }
        }
    }
}

void orderPopulation(char name[5][41],int population[5])
{
    char auxname[41];
    int auxpopulation;
    for(int k=0;k<4;k++)
    {
        for(int r=0;r<4-k;r++)
        {
            if(population[r]<population[r+1])
            {
                strcpy(auxname,name[r]);
                strcpy(name[r],name[r+1]);
                strcpy(name[r+1],auxname);
                auxpopulation=population[r];
                population[r]=population[r+1];
                population[r+1]=auxpopulation;
            }
        }
    }
}

void print(char name[5][41],int population[5])
{
    for(int r=0;r<5;r++)
    {
        printf("%s - %i\n",name[r],population[r]);
    }
}

void main()
{
    char name[5][41];
    int population[5];
    load(name,population);
    orderAlphabetically(name,population);
    printf("\nCountries arranged alphabetically.\n");
    print(name,population);
    orderPopulation(name,population);
    printf("\nCountries arranged by population.\n");
    print(name,population);
    getch();
    return 0;
}
