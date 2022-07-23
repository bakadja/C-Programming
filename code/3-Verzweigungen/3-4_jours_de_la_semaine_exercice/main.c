#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf ("\nTP: Wochentage!\n\n");

    //dekalration et initialisation des variables
    int wahl=0;

    //afficher et saisie user
    printf("Nummer des Wochentags: 1-Montag,2-Dienstag.....,7-Sonntag\n");
    printf("Geben Sie eine Nummer für den Wochentag an: ");
    scanf("%d",&wahl);

    //afficher jour de la Semaine et cas d un numero invalide
    printf("Dies entspricht");
    switch (wahl)
    {
    case 1 /* constant-expression */:
        /* code */
        printf(" Montag\n");
        break;
    case 2 :
        printf(" Dienstag\n");
        break;
    case 3 :
        printf(" Mittwoch\n");
        break;
    case 4 :
        printf(" Donnerstag\n");
        break;
    case 5 :
        printf(" Freitag\n");
        break;
    case 6 :
        printf(" Samstag\n");
        break;
    case 7 :
        printf(" Sonntag\n");
        break;
    
    default:
        printf(" eine ungültige Zahl geben Sie eine Zahl zwischen 1 und 7 ein\n");
        break;
    }

    return 0;
}