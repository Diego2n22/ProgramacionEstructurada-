#include<stdio.h>

int main()
{
    printf("Encontrar el numero mas grande de un arreglo.\n\n");

    int lis[5];
    int mayor;

    printf("Ingrese los 5 valores\n\n");
    printf("Valor [0] : ");
    scanf("%i",& lis[0]);
     printf("Valor [1] : ");
    scanf("%i",& lis[1]);
     printf("Valor [2] : ");
    scanf("%i",& lis[2]);
     printf("Valor [3] : ");
    scanf("%i",& lis[3]);
     printf("Valor [4] : ");
    scanf("%i",& lis[4]) ;
     //printf("Valor [5] : ");
    //scanf("%i",& lis[5]) ;

    mayor = lis[0];
    for(int i = 0; i < 5; i++)
        if(lis[i] > lis[i-1])
            mayor = lis[i];

    printf("\nEl numero mayor es: %d\n\n", mayor);

    return 0;
}



    //for(int i = 0; i <= 11; i++)
    //
        //listaEnteros[i] = i*i;
        //printf("valor (%d): %d \n", i, listaEnteros[i]);
    //}


