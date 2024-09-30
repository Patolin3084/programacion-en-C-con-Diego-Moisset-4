#include<stdio.h>
#include<conio.h>

static inline int calcularCuadrado(int x)
{
    return x * x;
}

int main()
{
    printf("El cuadrado de 5 es: %i",calcularCuadrado(5));
    getch();
    return 0;
}
