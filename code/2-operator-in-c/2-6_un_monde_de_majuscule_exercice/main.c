#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP:Eine Welt der Großbuchstaben\n\n");

    //deklaration et initialisation des Variables
    char buchstabe=' '; // initialisation avec espace 

    //afficher et saisier
    printf("Geben Sie einen Buchstaben in Kleinbuchstaben ein: ");
    scanf("%c",&buchstabe);

    //convesion miniscule -> majuscule voire table ASCII
    buchstabe -=32; // 32 etant le decallage qui existe entre une buchstabe miniscule et majuscule

    //aaficher resultat
    printf("Dies ergibt in Großbuchstaben: %c\n",buchstabe);

    return 0;
}