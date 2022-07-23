#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: Multiplikationstabelle \n\n");

    //Deklaration initialisation des variables
    int zahl = 0;

    //afficher et saisie user
    printf("Wie viele Multiplikationstabellen sollen angezeigt werden? ");
    scanf("%d", &zahl);

    //affichage Table de multiplication
    for (int j = 0; j <= zahl; j++)
    {
        printf("\nMultiplikationstabelle %d\n",j);
        for (int  i = 0; i < 10; i++)
        {
            printf("\t%dx%d = %d\n",j,i,j*i);
        }
        printf("\n");
    }
    
    return 0;
}  