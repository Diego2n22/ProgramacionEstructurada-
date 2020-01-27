#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador While\n");
    int limit;
    int i=1;

    scanf("%i",&limit);

    while(i<=limit)
    {
        printf("Numero: %i \n",i);
        i++;
    }

}
