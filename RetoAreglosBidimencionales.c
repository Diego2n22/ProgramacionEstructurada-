#include <stdio.h>
int main()
{
    printf("Reto Arreglos Bidimencionales\n");
    int a;
    int suma [3][4] ={{0,1,1,2},
                       {0,2,3,5},
                       {5,5,10,6}};
    a =suma[0][0]+suma[0][1]+suma[0][2]+suma[0][3];
     printf("\n Suma primera fila %i", a);
    a=suma[1][0]+suma[1][1]+suma[1][2]+suma[1][3];
     printf("\n Suma segunda fila %i", a);
    a=suma[2][0]+suma[2][1]+suma[2][2]+suma[2][3];
     printf("\n Suma tercera fila %i", a);
    return 0;
}
