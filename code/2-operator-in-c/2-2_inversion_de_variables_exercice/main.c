#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: Umkehrung von Variablen \n\n");

    //deklaration et initialisation des variable
    int var1=123, var2=18, tmp=0; // tmp est une variable temporaire
    
    //affichage initiale
    printf("var1=%d et var2=%d\n\n", var1,var2);

    //inversion des variables
    tmp=var1; 
    var1=var2;
    var2=tmp;

    //affichage
    printf("var1=%d et var2=%d \n", var1,var2);

    return 0;
}