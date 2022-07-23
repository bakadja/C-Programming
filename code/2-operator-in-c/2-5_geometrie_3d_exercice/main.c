#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    printf("\nTP:Geometrie 3D\n\n");

    //deklaration et initialisation des varibales
    int radius = 0, durchmesser = 0;
    float umfang=0, flaeche=0;
    int hoehe=0;
    float volumen_zylinder=0, volumen_Kegel=0; 

    // afficher et saisier utilisateur
    printf("Wie groß ist der Radius des Kreises? ");
    scanf("%d", &radius);
    printf("Wie hoch ist der Zylinder ? ");
    scanf("%d",&hoehe);

    //calculs
    durchmesser=2*radius;
    umfang=(float)durchmesser*M_PI;            // M_PI est deja deklare dans math.h
    flaeche=pow(radius,2)*M_PI; //pow(nb, exposant) -> pow(2,3) <-> 2 expo 3=8.pow ->math.h
    volumen_zylinder=flaeche*(float)hoehe;
    volumen_Kegel=volumen_zylinder/3.0;

    //afficher reusltat
    printf("\t-durchmesser = %d\n",durchmesser);
    printf("\t-Umfang = %.4f\n",umfang);
    printf("\t-Flaeche = %.4f\n",flaeche);
    printf("\t-Volumen des zylinders = %.4f\n",volumen_zylinder);
    printf("\t-Volumen des Kegels = %.4f\n",volumen_Kegel);


    return 0;
}