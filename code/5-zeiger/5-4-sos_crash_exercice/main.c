#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("\n TP: SOS crash\n\n");
    
    int alt=23;
    int* p_alt;
    p_alt=&alt;

    printf("Wie alt sind Sie? "); 
    scanf("%d", p_alt);

    printf("Sie sind  %d Jahre alt \n", alt);

    return 0; 
}