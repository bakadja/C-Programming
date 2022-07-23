#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf ("\nTP: einen trinken gehen!\n\n");

    //dekalration et initialisation des variables
    int wahl=0;
    //afficher et saisie user
    printf("Was möchten Sie trinken?\n");
    printf("\t0-Rien\n");
    printf("\t1-Cola\n");
    printf("\t2-Bier\n");
    printf("\t3-Kaffe\n");
    scanf("%d",&wahl);

    //afficher nom de la boisson servit au client
    switch (wahl)
    {
    
    case 1:
        printf("hier ist Ihre Cola\n");
        break;
    case 2:
        // les accolades sont necessaire lorsqu on veut declarer une variable dans le case
        {
            int alt=0;
            const int volljaehrig = 18;

            printf("Wie alt sind Sie ? ");
            scanf("%d",&alt);
 
            if (alt>=volljaehrig )
            {
                printf("Hier ist Ihr Bier\n");
            }
            else
            {
                printf("Es ist verboten, Bier an Minderjährige zu verkaufen\n");
            }
            break;
        }     
    case 3:
        printf("Hier ist Ihr Kaffee\n");
        break;
    
    default:
        printf("Bis bald!\n");
        break;
    }

}