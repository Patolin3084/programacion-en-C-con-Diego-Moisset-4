#include<stdio.h>
#include<conio.h>

int main()
{
    int altas, bajas, nota, x;
    altas=0;
    bajas=0;
    x=1;
    while(x<=10)
    {
        printf("Ingrese nota del estudiante:");
        scanf("%i", &nota);
        if (nota>=7)
        {
            altas=altas+1;
        }
        else
        {
            bajas=bajas+1;
        }
        x=x+1;
    }
    printf("Notas altas:");
    printf("%i",altas);
    printf("\n");
    printf("Notas bajas:");
    printf("%i",bajas);
    getch();
    return 0;
}
