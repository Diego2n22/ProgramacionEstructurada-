#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
 b = 59;
 c = 89;
    printf("Para saber si aprobo o no ingresa tu calificacion :");
    scanf("%i",&a);

    if(a <= b)
        printf("Estas reprobado.");
    else if(a <=c)
        printf("Estas Aprobado.\n");
    else
    {
        printf("Estas aprobado felicitaciones n.n \n\n");
    }
    return 0;
}
