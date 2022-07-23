#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\n TP: Invertieren von Variablen\n\n");

    //deklaration et init varibles
    char vorname = 'A', nachname='Z';
    char* p_vorname = &vorname; 
    char* p_nachname = &nachname;
    char tmp;    // variable pour stocker temporairement une autre variable

    //affichage et saisie user
    printf("Ihres initialen %c.%c\n", vorname, nachname);
    
    //on inverse ici le contenu des pointeur (* pour avoir le contenu) et non les pointeur
    tmp=*p_vorname;
    *p_vorname = *p_nachname;
    *p_nachname=tmp;

    //affichage
    printf("Ihres initialen  %c.%c\n", vorname, nachname);
}