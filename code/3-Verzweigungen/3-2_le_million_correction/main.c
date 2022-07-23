#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf ("\nTP: Die Million!\n\n");
    //dekalration et initialisation des variables
    int zahl = 0;
    const int TAUSEND= 1000;
    const int MILLION= 1000000;

    //afficher et saisi user
    printf ("Wie viel haben Sie verdient? ");
    scanf(" %d",&zahl);

    //afficher espace entre les TAUSEND et centaine 
    if (zahl>=MILLION )
    {
    printf ("\tWow %d %03d %03d euros!\n",zahl/MILLION,(zahl%MILLION)/TAUSEND,zahl%TAUSEND);
    }
    else if(zahl>=TAUSEND)
    {
        printf ("\tWow %d %03d euros!\n",zahl/TAUSEND,zahl%TAUSEND);//%03d preceding minimum 3 0(zero)
    }
    else
    {
         printf ("\tWow %d euros!\n",zahl);
    }
    
    return 0;
}