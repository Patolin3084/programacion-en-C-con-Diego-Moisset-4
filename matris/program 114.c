#include<stdio.h>
#include<conio.h>

void load(int matrix[3][5])
{
    int r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<5;c++)
        {
            printf("Enter a element: ");
            scanf("%i",&matrix[r][c]);
        }
    }
}

void print(int matrix[3][5])
{
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<5;c++)
        {
            printf("%i",matrix[r][c]);
        }
        printf("\n");
    }
}

void main()
{
    int matrix[3][5];
    load(matrix);
    print(matrix);
    getch();
    return 0;
}
