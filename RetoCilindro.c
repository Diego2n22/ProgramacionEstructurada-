#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Vamos a calcular el valor de un cilindro \n \n");


    int radio;
    int altura;
    int area;
    int volumen;

    printf("Ingrese el valor del radio de la base:");
    scanf("%i", &radio);

    printf("Ingrese el valor de la altura del cilindro:");
    scanf("%i", &altura);

    area=(2 * (3.1416 * (radio*radio)));
    volumen = (3.1414 * ((radio*radio) * altura));

    printf("\n El area de la base es: %i", area);
    printf("\n El volumen del cilindro es: %i", volumen);


    return 0;
}
