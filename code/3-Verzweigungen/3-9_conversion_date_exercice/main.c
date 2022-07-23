#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: Datumsumwandlung\n\n");
    //deklaration et initialisation des variables
    int tag=0, monat=0, jahr=0;
    
    //affichage et saisie user format long
    printf("Geben Sie ein Datum im Format tt/mm/jjjj: ");
    
    //autre alternative du scanf
    scanf("%d/%d/%d",&tag,&monat,&jahr); // -> / presice au scanf le formattage du caracter qui va etre entre
                            
    //affichage du tag
    printf("%d ",tag);
    
    //affichage date
    switch (monat)
    {
    case 1:
        printf("Januar");
        break;
    case 2:
        printf("Februar");
        break;
    case 3:
        printf("März");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mai");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Dezember");
        break;

    default:
        printf("Monatszahl ungültig\n");
        break;
    }
    //affichage anne
    printf(" %d\n",jahr);

    return 0;
}