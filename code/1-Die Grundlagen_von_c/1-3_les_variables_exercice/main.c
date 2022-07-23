#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //delkartion des variables
    int alt = 23;
    float groesse = 1.72;
    char note = 'A'; // on peut aussi l nitialiser avec un espace pour chaine vide

    printf("Der Benutzer ist %d Jahre Alt und misst %.2f m\n",alt,groesse);
    printf("Er hat eine Note von %c\n\n",note);

    return 0;
}