#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: Primzahl  \n\n");

    //Deklaration initialisation des variables
    int ganzzahl = 0;
    int primzahl_test = 1;

    //affichage et saisie user
    printf("Geben Sie eine ganze Zahl an: ");
    scanf("%d", &ganzzahl);

    //test si c est un nombre premier
    if (ganzzahl == 0 || ganzzahl == 1)
    {
        primzahl_test = 0;
    }
    else
    {
        for (int i = 2; i < ganzzahl; i++)//on s arrete a ganzzahl-1 (car a/a=1 et a%a est tjr=0)
        {
            if ((ganzzahl%i) == 0)
            {
                primzahl_test=0; 
                break;      // pour eviter de controler les autre valeur de i inutile
            }
        }
    }
    if (primzahl_test) // if primzahl_test=1
    {
        printf("\tist eine Primzahl\n");
    }
    else
    {
        printf("\t ist keine Primzahl\n");
    }
    return 0;
}