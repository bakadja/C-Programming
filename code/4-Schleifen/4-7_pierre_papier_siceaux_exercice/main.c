#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    printf("\nTP: Stein, Blatt, Schere  \n\n");
    srand(time(NULL));
    // declaration de nos variables
    int computer_spiel = 0, benutzer_spiel = 0;
    const int MIN_WERT = 1, MAX_WERT = 3;
    const int STEIN=1, BLATT=2, SCHERE=3;
    int punkt_benutzer=0, punkt_computer=0;
    int bedingung=1; // condition=vrai/wahr
    do
    {
        //afiichage et saisie user
        printf("\nWas willst du spielen (1- Stein, 2- Blatt, 3- Schere): ");
        scanf("%d", &benutzer_spiel);
 
        //verification de la saisie user <4 et saisi:user<1
        if (benutzer_spiel<1 || benutzer_spiel>3)
        {
            printf("Geben Sie einen gültigen Wert zwischen (1 und 3) ein\n");
            continue;
        }
        // generation et affichage d'un nombre aleatoire
        computer_spiel = (rand() % MAX_WERT) + MIN_WERT;

        //realisation du jeux
        printf("Spieler spielt %d und der Computer spielt %d",benutzer_spiel,computer_spiel);

        if (benutzer_spiel == computer_spiel)
        {
            printf(" >>>> Unentschieden\n");
            printf("Punkte: Computer:%d und Spieler:%d\n",punkt_computer,punkt_benutzer);
        }
        else
        {
            if ((benutzer_spiel == STEIN && computer_spiel == SCHERE)
                || (benutzer_spiel == BLATT && computer_spiel == STEIN)
                || (benutzer_spiel == SCHERE && computer_spiel == BLATT))
            {
                punkt_benutzer++;
                printf(" >>>> Spieler gewinnt %d Punkte\n",MIN_WERT);
                printf("Punkte: Computer:%d und Spieler:%d\n",punkt_computer,punkt_benutzer);
            }
            else     
            {
                punkt_computer++;
                printf(" >>>> Computer gewinnt %d Punkte\n",MIN_WERT);
                printf("Punkte: Computer:%d und Spieler:%d\n",punkt_computer,punkt_benutzer);
                
            }
            //conditon d arret de la boucle
            if (punkt_benutzer == MAX_WERT || punkt_computer == MAX_WERT)
            {
                bedingung= 0; // faux (bedingung d arret de la boucle)

                 //fin de la partie
                if (punkt_benutzer>punkt_computer)
                {
                    printf("\nSie haben das Spiel gewonnen\n");
                }
                else
                {
                    printf("\nSie haben das Spiel leider verloren\n");
                }
            }
        }        
    }while(bedingung);
    
   
    return 0;
}