#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: Vergleich der Zahlen!\n\n");

    //dekalration et initialisation des variables
    int zahl1=0, zahl2=0;

    //affichage et saisie user 
    printf("Geben Sie zwei Zahlen:\n");

    printf("\t Zahl 1 = ");
    scanf("%d",&zahl1);
     
    printf("\t Zahl 2 = ");
    scanf("%d",&zahl2);

    //comparaison cas egaux ou non
    if(zahl1 == zahl2)
    {
        printf("Die Zahlen sind gleich\n");
    }
    else
    {
        printf("Die Zahlen sind ungleich\n");
        if (zahl1>zahl2)
        {
            printf("Zahl 1 ist um %d größer als Zahl 2\n",zahl1-zahl2);
        }
        else
        {
            printf("Zahl 2 ist um %d größer als Zahl 1\n",(zahl2-zahl1));
        }
        
    }
    
    return 0;
}