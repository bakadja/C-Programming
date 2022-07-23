#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\n TP: Arrays und Adressen\n\n");
    
    //deklaration  variable et init
    const int TAILLE=5;
    char tab[TAILLE]={'C','O','D','E','R'};

    //afficher l index et le contenu er l adresse
    for (int i = 0; i < TAILLE; i++)
        printf("tab[%d] = %c (%p)\n",i,tab[i],&tab[i]);
    
    printf("\nZeiger-Syntax\n");
    for (int i = 0; i < TAILLE; i++)
        printf("*(tab + %d) = %c (%p)\n",i,*(tab+i),(tab+i));
    return 0;
} 