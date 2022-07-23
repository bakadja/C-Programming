#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    printf("\nTP: Sinus und Kosinus \n\n");

    //Deklaration initialisation des variables
    int winkel = 0;

    //afficher et saisie user
    printf("Geben Sie einen maximalen Winkel in Grad an: ");
    scanf("%d", &winkel);

    //affichage valeur cosinus et sinus (par pas de 2)
    for (int i = 0; i <= winkel; i++)
    {
        printf("\tcos(%d) = %f\n", i,cos((float)i)); // cos / sin prend en input float/double
        if ((i%2) == 0)
            printf("\tsin(%d) = %f\n", i,sin((float)i));
    }
    
    return 0;
}