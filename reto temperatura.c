#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Fah;  //temperatura en grados Fahrenheit
    float Cel;   //grados Celsius

    printf("Hola, Vamos a transformar grados Fahrenheit a grados celsius \n \n");
    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf("%f", &Fah);

    Cel = (( Fah - 32) *5)/9;

    printf(" \n la temperatura en grados celsius es :%f", Cel);
    return 0;
}
