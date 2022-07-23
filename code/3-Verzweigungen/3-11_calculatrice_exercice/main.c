#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP: Einfacher Taschenrechner\n\n");
    //deklaration et initialisation des variables
    int zahl1 = 0, zahl2 = 0;
    char operator;

    //afficher et saisie user
    printf("Geben Sie die mathematische Operation an, die ich lösen soll (ohne Leerzeichen)\n");
    printf("\t-In Form [zahl1 operator zahl2] z.B (2+3)\n");
    printf("\t-operator möglich[+, -, *, /,%%]\n"); // metrre un %% pour afficher 1 seul %
    printf(">");
    scanf("%d%c%d",&zahl1,&operator,&zahl2);

    //affichage resultat calculs
    //printf("Zu einfach! das ergebnis ist: ");
    switch (operator)
    {
    case '+' :
        printf("Zu einfach! das ergebnis ist: ");
        printf("%d %c %d = %d\n",zahl1,operator,zahl2,(zahl1+zahl2));
        break;
    case '-' :
        printf("Zu einfach! das ergebnis ist: ");
        printf("%d %c %d = %d\n",zahl1,operator,zahl2,(zahl1-zahl2));
        break;
    case '*' :
        printf("Zu einfach! das ergebnis ist: ");
        printf("%d %c %d = %d\n",zahl1,operator,zahl2,(zahl1*zahl2));
        break;
    case '%' :
        printf("Zu einfach! das ergebnis ist: ");
        printf("%d %c %d = %d\n",zahl1,operator,zahl2,(zahl1%zahl2));
        break;
    case '/' :
        if (zahl2>0)
        {
            printf("Zu einfach! das ergebnis ist: ");
            printf("%d %c %d = %.2f\n",zahl1,operator,zahl2,((float)zahl1/(float)zahl2));
        }
        else
        {
            printf("Die Division durch 0 ist unmöglich!\n");
        }
        break;
    default:
        printf("Operator Ungültig, müssen Sie einen der Operatoren (+,-,*,/,%%) vewenden\n");
        break;
    }     
    return 0;
}