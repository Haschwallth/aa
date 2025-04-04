#include <stdio.h>

int main()
{
    int numero;

    printf ("Digite aqui a seu numero: ");
    scanf("%d",&numero);

    if (numero == 0){
        printf ("\nSeu numero e igual a zero");

   } else if (numero < 0){
        printf ("\nNumero negativo!");

   } else if (numero > 0){
        printf ("\nNumero positivo!");}

   if (numero % 2 == 0) {
       printf ("\nNumero par");

   } else {
     printf("\nNumero impar");
   }

    printf("\n\n");
    return 0;
}
