#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\n TP: Adressen und Variables\n\n");
    // declaration de nos variables
    char var_char='A';

    //affichage contenu varaible, taille en memoire et son adresse
    printf("Informationen über meine Variable:\n");
    printf("\tTyp:%s\n", "char");
    printf("\tGroesse:%d octet\n",(int)sizeof(char));
    printf("\tInhalt: %c\n", var_char);
    printf("\tAdresse:%p\n",&var_char);
    
    return 0;
}