#include <stdio.h>
#include <stdlib.h>

int main()
{
     char frase[50];
    int size;

    printf("Invertir la frase.\n \n");

    printf("Ingrese la frase:\n");
    gets(frase);
    printf("Leer frase: \n");
    puts(frase);

    for(int i = 0; i < strlen(frase); i++)
    {
        printf("%c", frase[(strlen(frase) - 1) - i]);
    }

    return 0;
}


