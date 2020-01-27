#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
   int enteroA = 1;
   float floatA = 1.1;
   double doubleA = 1.2;
   char letterA = 'A';


   int enteroB;
   float floatB;
   char letterB;
   double doubleB;

// Es comando scanf sirve para dar un valor a la variable

   printf("Ingrese el valor del entero B :  ");
   scanf("%i", &enteroB);


    printf("Ingrese el valor del float B :  ");
   scanf("%f", &floatB);


    printf("El valor del entero B es %i \n ",enteroB );
     printf("El valor del float B es %f \n ",floatB );


   //Estamos ifmprimiendo nuestra variable entero,float, double y char

   printf("El valor de nuestro entero A es: %i\n \n", enteroA);
   printf("El valor de mi flotante A es: %f\n \n", floatA);
   printf("El valor de mi double A es: %d\n \n", doubleA);
   printf("El valor de mi char A es: %c\n \n",letterA);
}
