#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores relacionales\n");

    float a, b;
    a = 5;
    b = 10;

    if(a<b)
        printf("Pregunta 1: Cierta \n");
    else
    printf("Pregunta 1: False \n");

      if(a>b)
        printf("Pregunta 2: Cierta \n");
    else
    printf("Pregunta 2: False \n");

    if(a<=b)
    printf("Pregunta 3: Cierta \n");
    else
    printf("Pregunta 3: False \n");

     if(a>=b)
    printf("Pregunta 4: Cierta \n");
    else
    printf("Pregunta 4: False \n");

      if(a==b)
    printf("Pregunta 5: Cierta \n" );
    else
    printf("Pregunta 5: False \n");

      if(a!=b)
    printf("Pregunta 6: Cierta \n");
    else
    printf("Pregunta 6: False \n");

    return 0;
}
