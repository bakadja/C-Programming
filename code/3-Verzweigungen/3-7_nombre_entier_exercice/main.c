#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: ganze Zahl\n\n");

    //dekalration et initialisation des variables
    float zahl =0.0;

    //afficher et saisi user
    printf("Geben Sie eine Zahl an: ");
    scanf("%f",&zahl);

    //verification si le zahl est entier ou non et affichage
    if ((int)zahl == zahl)
        printf ("Diese Zahl ist ganzzahlig\n");
    else
        printf ("Diese Zahl ist nicht ganzzahlig\n");
    
    return 0;
}