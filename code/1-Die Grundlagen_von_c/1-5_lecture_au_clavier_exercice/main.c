#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //deklaration des varaibles
    int alt=0;
    float groesse=0.0;
    char initial1=' ';
    char initial2=' ';

    printf("Geben Sie Ihr Alter und Ihre Größe an: ");
    scanf("%d%f",&alt,&groesse);
    getchar(); // getchar () enleve le dernier \n restant (issu de la touche clavier entre)

    printf("Geben Sie Ihre Initialen an: ");
    scanf("%c%c",&initial1,&initial2); // typs espace entre le " et % dans scanf

    //affichage
    printf("Sie sind %d Jahre Alt und %.2f gross\n",alt,groesse);
    printf("Ihre Initialen sind %c.%c\n\n",initial1,initial2);


    return 0;
}