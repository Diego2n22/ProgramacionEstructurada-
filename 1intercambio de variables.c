#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    int Y;
    int Intercambio;

    printf("Da el valor de x: ");
    scanf("%i: ", &X);

    printf("Da el valor de y: ");
    scanf("%i: ", &Y);

    Intercambio = X;
    X = Y;
    Y = Intercambio ;

    printf("\nEl valor intercambiado del entero x es: %i \n", X);
    printf("El valor intercambiado del entero y es: %i \n", Y);

    getchar();
    return 0;
}
