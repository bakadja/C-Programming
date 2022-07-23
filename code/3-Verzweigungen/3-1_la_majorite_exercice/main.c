#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf ("\nTP: Volljährigkeit\n\n");

    //dekalration et initialisation des variables
    int alt_user = 0;
    const int volljaehrigkeit= 18; //on peut facilemnt changer cette valeur facilement dans notre 
                            // programmme tout en evitant d ecrire les chiffres ds le program

    //afficher et saisi user 
    printf ("Wie alt Sind Sie? ");
    scanf ("%d", &alt_user);

    //verifcation majeur ou non
    if (alt_user >= volljaehrigkeit)
    {
        printf ("Sie sind also volljährig\n");
    }
    else
    {
        printf ("Sie sind minderjährig\n");
    }
    
    return 0;
}