#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\nTP2: Memoire et Variables\n\n");
    
    //deklaration de variable
    int mon_int= 2000;
    long mon_long= 5000000;
    short mon_short= 20;
    float mon_float= 20.123;
    double mon_double= 2000.987654321;
    char mon_char= 'A';

    //affichage de variable & %zu est le type de la fonction sizeof, 1 Byte=1 octet
    printf("mon_char = %c und ist %d Bytes lang  \n", mon_char, (int)sizeof(char)); // faire (int) -> caster le sizeof
    printf("mon_short = %d und ist %zu Bytes lang  \n", mon_short, sizeof(short));
    printf("mon_int = %d und ist %zu Bytes lang  \n", mon_int, sizeof(int));
    printf("mon_float = %f und ist %zu Bytes lang \n", mon_float, sizeof(float));
    printf("mon_long = %ld und ist %zu Bytes lang \n", mon_long, sizeof(long));
    printf("mon_double = %f und ist %zu Bytes lang \n", mon_double, sizeof(double));
    
    
    return 0;
}