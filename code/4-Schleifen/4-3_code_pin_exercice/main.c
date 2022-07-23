#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP:  Pincode  \n\n");

    //Deklaration initialisation des variables
    const int PIN_CODE = 9452, MAX_VERSUCHEN=3;
    int code = 0;

    //afficher  saisie et verification du code pin 
    for (int i = MAX_VERSUCHEN - 1 ; i >= 0 ; i--)
    {    
        printf("PIN-Code: ");
        scanf("%d", &code);
        if (code == PIN_CODE)
        {
            printf("\tTelefon entsperrt\n");
            break;     // break pour sortir direct de la boucle cas ou il trouve du 1 er coup
        }
        else
        {
            printf("\tFehler, Sie haben noch %d Versuche.\n",i);
        }   
    }
    
    return 0;
}