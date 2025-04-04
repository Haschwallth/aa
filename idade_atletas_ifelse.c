#include <stdio.h>

int main()
{
    int idade;

    printf ("Digite aqui a sua idade: ");
    scanf("%d",& idade);

    if (idade == 5 || idade == 6){
        printf ("\nCategora Mirim A!");

   } else if (idade == 7 || idade == 8){
        printf ("\nCategora Mirim B!");

   } else if (idade == 9 || idade == 10){
        printf ("\nCategora Mirim C!");

   } else if (idade == 11 || idade == 12){
        printf ("\nCategora Infantil!");

   } else if (idade == 13 || idade == 14){
        printf ("\nCategoria Infanto-Juvenil!");

   } else if (idade >= 15 && idade <= 17){
        printf ("\nCategoria Juvenil!");

   } else if (idade >= 18 && idade <= 35){
        printf ("\nCategoria Adulta!");

    } else if (idade >= 36){
        printf ("\nCategoria Master!");
        }

    return 0;
}
