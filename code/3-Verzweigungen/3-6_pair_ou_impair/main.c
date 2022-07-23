#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP:gerade oder ungerade\n\n");

    //delaration & initialization
    int zahl=0;

    //afficher et saisi user 
    printf("Geben Sie eine ganze Zahl ein: ");
    scanf("%d",&zahl);

    //verfication pair ou impair
    if ((zahl % 2 )== 0)
        printf("\t%d ist eine gerade Zahl\n",zahl);
    else
        printf("\t%d ist eine ungerade Zahl\n",zahl);
        
    return 0;
}