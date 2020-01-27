#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Si me das dos numeros enteros, te dare el menor entre ellos \n");

    int a, b;

    printf( "Ingresa el primer numero : " );
    scanf("%i", &a);

     printf( "Ingresa el segundo numero : " );
    scanf("%i", &b);

     if((a > b) || (a < b)   )
        printf("El numero menor es :%i  \n\n", a);
    else
         printf("El numero menor es :%i  \n\n", b);

     //if   (a==b)
      //printf("Los numeros son igules" );
    //else
         //printf("Gracias por comparar numeros \n");



    return 0;
}
