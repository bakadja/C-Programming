#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\n TP: Anzeige von Arrays\n\n");

    //deklaration  
    const int GROESSE=5;
    int tab[GROESSE];
    
    // init variable avec  1 2 3 4 5 
    for(int i=0; i<GROESSE; i++)
        tab[i] =i+1;
    
    //affichage
    printf("Array: ");
    for(int i=0; i<GROESSE; i++)
        printf("%d ",tab[i]);
    
    //affichae inverse
    printf("\nInvers: ");
    for(int i=GROESSE-1; i>=0; i--)
        printf("%d ",tab[i]);
    printf("\n");
    
    return 0;
}