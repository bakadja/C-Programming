#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // deklaration variable
    const float wechselkurs= 1.00;  // stand 07.2022
    float euro = 0.0, dollar= 0.0;
    
    //lecture 
    printf("Geben Sie einen Betrag in Euro ein: ");
    scanf("%f", &euro);

    //affichage
    dollar=euro*wechselkurs;
    printf("Der Wechselkurs Euro->Dollar beträgt %.2f\n",wechselkurs );
    printf("Sie haben also %.2f Dollars\n",dollar);

    return 0;
}