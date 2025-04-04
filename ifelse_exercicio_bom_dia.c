#include <stdio.h>

int main()
{
    int hora;

    printf ("Que horas sao? ");
    scanf("%d",& hora);

    if (hora >= 4 && hora <= 11){
        printf ("\nBom dia!");

   } else if (hora >= 12 && hora <= 18) {
        printf ("\nBoa tarde!");

   } else if (hora >= 19 && hora <= 23 || hora <=3) {
        printf ("\nBoa noite!");
    }


    return 0;
}
