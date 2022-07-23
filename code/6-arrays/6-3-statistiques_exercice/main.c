#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\n TP: Statistiken\n\n");
    
    //deklaration  variable et init
    const int TAILLE=5;
    int tab[TAILLE];
    int min=0, max=0;
    float summe;

    //1-affichage et saisie user
    printf("Füllen Sie die folgende Array aus:\n");
    for (int i = 0; i < TAILLE; i++)
    {
        printf("tab[%d]: ",i);
        scanf("%d",(tab+i));
    }
    //affichage valeur min , max et moyenne du tableau
    for (int j = 0; j < TAILLE; j++)
    {   
        for (int i = 0; i < TAILLE; i++)
        {
            if(i==j)
                continue; // pour eviter de retester le cas ou tab[2]<tab[2]
            else
            {
                if(tab[j]<tab[i])
                    min++; 
                else
                    max++; 
            }
        }  
        if(min == 4) // car le else est execute juste 4 fois et la 5 foia est reserver au if (i==j)
            printf("Min=%d, ",*(tab+j));
        if(max == 4)
            printf("Max=%d, ",*(tab+j));
        
        summe=summe+tab[j];
        min=0;   
        max=0;    // reinitilisation de min et max avant d entrer 
    }  
    printf("Durchschnitt=%.2f\n",summe/(int)TAILLE);  
          
    return 0;

}