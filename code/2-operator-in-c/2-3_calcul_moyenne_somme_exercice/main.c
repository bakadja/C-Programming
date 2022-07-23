#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP:Durchschnitt & Summe\n\n");

    //deklaration et initialisation des Variables
    int a=0,b=0,c=0, summe=0;
    float durchnitt=0.0;

    //afficher demanden utilisateur
    printf("Geben Sie 3 ganze Zahlen ein, die durch Leerzeichen getrennt sind: ");

    //saisie
    scanf("%d %d %d",&a,&b,&c); // les espace ds le scanf car le user va entrer les chiffres avec des espace  

    //calcul summe et afficher
    summe=a+b+c;
    printf("\tsumme = %d\n",summe);

    //calcul durchnitt et Afficher
    durchnitt=(float)summe/3.0;
    printf("\tdurchnitt = %f\n",durchnitt);

    return 0;
}