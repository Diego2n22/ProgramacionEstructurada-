#include <stdio.h>

int main()
{
    int x;
    printf("Ingresa el valor: ");
    scanf("%i", &x);

    x %=  5;
    x++;

    printf("x: %i \n", x);

    return 0;
}
