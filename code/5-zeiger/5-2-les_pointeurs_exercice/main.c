#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\n TP: Zeiger\n\n");
    // declaration de nos variables
    int var=0;
    int* p_var=0; 

    //test du pointeur avant de l utiliser
    if(p_var==0)
    {
        // affichage et saisie user
        p_var=&var;
        printf("Geben Sie eine ganze Zahl an: ");
        scanf("%d",p_var);      // plus besoin du & ds scanf car p_var=&var
        printf("Der Wert  %d wird an der Adresse %p gespeichert.\n",*p_var,p_var);
    }
    else
        printf("Ungültige Zeiger!\n");
    return 0;
}