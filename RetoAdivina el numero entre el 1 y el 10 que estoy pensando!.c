#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bienvenido \n\n");
    printf("Adivina el numero entre el 1 y el 10 que estoy pensando!\n\n");

    int a, x;

    a = 5;

    printf("Escribe un numero del 1 al 10 :");
    scanf("%i", &x);

     if(a == x)
        printf("Adivinaste.\n\n");
    else
    {
        printf("\n \n No adivinaste \n\n");
        printf("Sigue intentando.\n\n");
    }

    return 0;
}
