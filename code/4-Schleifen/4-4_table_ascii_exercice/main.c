#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: ASCII-Taelle   \n\n");

    //Deklaration initialisation des variables
    const int MIN_WERT=32, MAX_WERTE=126;

    //affichage table ascii entre valeru Min et MAX 
    printf("MEINE ASCII-TABELLE\n\n");
    printf("HEX\tDEC\tCHAR\n");

    for (int i = MIN_WERT; i <= MAX_WERTE; i++)
    {
        printf("%#x\t%d\t%c\n", i,i,i); // #c-> affiche 0x devant les HEX(hexadecimal)
    }
    
    return 0;
}