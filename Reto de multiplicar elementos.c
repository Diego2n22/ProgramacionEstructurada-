#include<stdio.h>

int main()
{
    printf("Multiplicar todos los elementos de un arreglo:\n\n");

    int multiplicacion ;
    int elementos[5];
    char a = 'valor';

    printf("Ingresa 5 valores a multiplicar:\n");
    printf(" Valores [1][2] [3] [4] [5] : \n");

    scanf("%d", &elementos[0]);
    scanf("%d", &elementos[1]);
    scanf("%d", &elementos[2]);
    scanf("%d", &elementos[3]);
    scanf("%d", &elementos[4]);

    multiplicacion = elementos[0] * elementos[1] * elementos[2] * elementos [3] * elementos[4];

    printf("\nEl resultado es: %d\n", multiplicacion);

    return 0;
}
