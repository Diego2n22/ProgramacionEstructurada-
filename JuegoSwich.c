#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Te encuentras en un juego y tienes tres caminos\n");

    int Camino;



    printf("Escribe 1 si quieres ir por el camino de dulces \n");
    printf("Escribe 2 si quieres ir por el camino de madera\n");
    printf("Escribe 3 si quieres ir por el camino de gaticos\n");
    scanf("%i",&Camino);

    switch(Camino)
    {
     case 1:
    printf("Moriras de diabetes.\n");
    break;

    case 2:
    printf("Trabajaras toda su vida como esclavo haciendo casas de madera. \n");
    break;

    case 3:
    printf("Los gatitos lindos te llevan una puerta y al cruzarla te despiertas \n");
    break;

     default:
    printf("\nElegiste una opcion sin valor.\n\n");
    break;
    }

}
