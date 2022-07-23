#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: Countdown\n\n");

    //Deklaration initialisation des variables
    int zahl=0;

    //affichage et saisie user
    printf("Geben Sie eine ganze Zahl für den Countdown ein: ");
    scanf("%d",&zahl);

    //affichage et copmte a rebout juska 0
    for(int i=zahl; i>0; i--)
    {
        printf("\t%d\n",i);
    }
    printf("\tBoom!\n");

    return 0;
}
