#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //delaration Variables
    char buchstabe=' ';

    printf("\nGeben Sie einen buchstabe an: ");
    scanf("%c",&buchstabe);

    //affichage
    printf("Sie haben den ASCII-Buchstaben %c, also:\n",buchstabe);
    printf("\t- %d en decimal\n", (int)buchstabe);
    printf("\t- %x en hexadecimal\n\n", (int)buchstabe);
    
    return 0;
}