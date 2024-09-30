#include<stdio.h>
#include<conio.h>

void load(int salary[5])
{
    for(int x=0;x<5;x++)
    {
        printf("Enter a salary: ");
        scanf("%i",&salary[x]);
    }
}


void order(int salary[5])
{
    for(int k=0;k<4;k++)
    {
        int aux;
        for(int x=0;x<4-k;x++)
        {
            if(salary[x]>salary[x+1])
            {
                aux=salary[x];
                salary[x]=salary[x+1];
                salary[x+1]=aux;
            }
        }
    }

}


void print(int salary[5])
{
    for(int x=0;x<5;x++)
    {
        printf("%i\n",salary[x]);
    }
}


void main()
{
    int salary[5];
    load(salary);
    order(salary);
    print(salary);
    getch();
    return 0;
}
