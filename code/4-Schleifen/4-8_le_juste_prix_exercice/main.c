#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    // declaration de nos variables
    int geheimnisvolle_zahl = 0, zahl = 0; 
    const int MIN_WERT = 1, MAX_WERT = 100;
    int versuche=0, wieder_spielen = 0;
    int bedingung = 1; //vrai
    const int MAX_VERSUCHE=3;
    
    while( bedingung)
    {
        // generation d'un nombre aleatoire
        srand(time(NULL));
        geheimnisvolle_zahl = (rand() % (MAX_WERT - MIN_WERT + 1)) + MIN_WERT;
        printf("Raten Sie, was meine geheimnisvolle Zahl ist. Tipp: Es ist eine Zahl zwischen  %d und %d \n", MIN_WERT, MAX_WERT);
        //affichage du nombre geheimnisvolle_zahl
        printf("geheimisvolle Zahl=%d\n", geheimnisvolle_zahl);

        //boucle de jeux, saisie user et Nombre de versuche
        do   
        {   
            versuche++;
            printf("\tversuche %d/%d >",versuche,MAX_VERSUCHE);

            scanf("%d",&zahl);
            if (zahl == geheimnisvolle_zahl)
            {
                printf("Gut gemacht! Die geheimnisvolle Zahl ist  %d\n",zahl);
                //wieder_spielen=1;
                bedingung= 0;// pour sortir de la boucle
            }
            else if (zahl < geheimnisvolle_zahl)
            {   
                printf("ist mehr!\n");
            }
            else
            {
                printf("ist weniger!\n");
            }

        }while(bedingung && versuche < MAX_VERSUCHE);

        // gestion du nombre de versuche
        if (versuche > MAX_VERSUCHE)
            printf("Schade Die geheimnisvolle Zahl war %d\n",geheimnisvolle_zahl);
            
        printf("Wollen Sie ein neues Spiel machen (1-ja, 2-nein)\n");
        printf(">");
        scanf("%d",&wieder_spielen);

        // menu pour faire une nouvelle partie ou quitte 
        if (wieder_spielen == 1)
        {
            system("clear"); //pour nettoyer le terminal 
            versuche=0;
            bedingung= 1;       // pour relancer la boucle de jeux
        }
        else
        {
            printf("Bis bald! \n");
            bedingung=0;
        }            
    }
    return 0;
}
