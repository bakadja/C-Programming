#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP:Geometrie 2D\n\n");

    //deklaration et initialisation des varibales
    int hoehe= 0, breite = 0, umfang=0, flaeche=0;

    //afficher
    printf("Geben Sie die Höhe und die Breite des Rechtecks: ");

    //Saisie
    scanf("%d %d", &hoehe, &breite);

    //calculs
    umfang = (hoehe+ breite)*2;
    flaeche = hoehe* breite;

    //afficher reusltat
    printf("\tumfang = %d\n", umfang);
    printf("\tflaeche = %d\n", flaeche);

    return 0;
}