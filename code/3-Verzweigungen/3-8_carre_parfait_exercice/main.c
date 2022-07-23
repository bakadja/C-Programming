#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    printf("\nTP: perfektes Quadrat\n\n");

    //dekalration et initialisation des variables
    int zahl = 0;
    float ergebnis=0.0;

    //Anzeige und Eingabe user
    printf("Geben Sie eine ganze Zahl an: ");
    scanf("%d", &zahl);

    //verifier si c est un carre parfait et affichicher
    ergebnis = sqrt((double)zahl); // sqrt prend en input un double

    if ((int)ergebnis == ergebnis && zahl > 0) // (int)ergebnis -> renvoi la partie entier slt
        printf("\t%d ist ein perfektes Quadrat(%d*%d)\n",zahl,(int)ergebnis,(int)ergebnis);
    else
        printf("\t%d ist kein perfektes Quadrat\n",zahl);

    return 0;
}