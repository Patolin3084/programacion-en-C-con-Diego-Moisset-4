#include<stdio.h>
#include<conio.h>

int load(int vector[8])
{
    for(int x=0;x<8;x++)
    {
        printf("Enter the value: ");
        scanf("%i",&vector[x]);
    }
}

int add(int vector[8])
{
    int add=0;
    for(int x=0;x<8;x++)
    {
        add=add+vector[x];
    }
    return add;
}

int addHi36(int vector[8])
{
    int add=0;
    for(int x=0;x<8;x++)
    {
        if(vector[x]>36)
        add=add+vector[x];
    }
    return add;
}

int addHi50(int vector[8])
{
    int add=0;
    for(int x=0;x<8;x++)
    {
        if(vector[x]>50)
        add=add+vector[x];
    }
    return add;
}

int main()
{
    int vector[8];
    load(vector);
    printf("Accumulate value of elements: %i\n",add(vector));
    printf("Accumulate value of elements greater to 36: %i\n",addHi36(vector));
    printf("Accumulate value of elements greater to 50: %i\n",addHi50(vector));
    getch();
    return 0;
}
