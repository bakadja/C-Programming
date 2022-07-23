#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // declaration de nos variables
    int anzahl_zeilen = 0;
    int bedingung; // typ booleen 1=vrai & 2=faux 

   //afiicher et saisie user et  test si user entre un nombre compris entre 3 et 10; 
    do
    {
        printf("Geben Sie eine Anzahl von Zeilen [3-10] an: ");
        scanf("%d", &anzahl_zeilen); 
        if(anzahl_zeilen<3 || anzahl_zeilen>10)
        {
            printf("Eingabe Ungültig\n");
            bedingung=0;  
        }    
        else
            bedingung=1;  

    }while(!bedingung);

    if(bedingung)
    {
        // afficher triangke isosele forme d etoile 
        for ( int j = 1; j <= anzahl_zeilen; j++ )
        { 
            for(int i= anzahl_zeilen; i>=1; i--)
            {
                if(i<=j)
                    printf("*");
                else
                    printf(" ");  
            }
            for (int i = 2 ; i<=j; i++)
            {
                printf("*");
            }
            printf("\n");  
        }
    }
    
    return 0;
}