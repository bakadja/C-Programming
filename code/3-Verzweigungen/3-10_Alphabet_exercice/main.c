#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: Alphabet\n\n");
    //deklaration et initialisation des variables
    char zeichen=' ' ;

    //affichage et saisie user
    printf("Nennen Sie ein Zeichen aus der ASCII-Tabelle: ");
    scanf("%c", &zeichen);

    //verifier si saisie est un chiffe  ou une letrre ou zeichen special (voire table ASCII)
    if (zeichen>47 && zeichen<58 )
    {
        printf("Das ist eine Zahl\n");
    }
    else if ((zeichen>64 && zeichen <91) || (zeichen>96 && zeichen<123))
    {
        if (zeichen <91)
            printf("Das ist ein Großbuchstabe\n");
        else
            printf("Das ist ein Kleinbuchstabe\n");
    }
    else
        printf("Das ist ein Sonderzeichen\n");
    
    return 0;
}