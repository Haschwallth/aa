#include <stdio.h>
#include <math.h>

int main()
{
    int idade, cont, tempo;
    char sexo;


    printf ("Diga-me se voce e homem ou mulher (F/M): ");
    scanf(" %c", &sexo);

    printf ("\nQual a sua idade ");
    scanf(" %d", &idade);

    printf ("\nQuanto tempo trabalhando com carteira assinada voce tem? ");
    scanf(" %d", &cont);

    if ((sexo == 'F' || sexo == 'f')&& idade >= 58 && cont >= 30) {
            printf ("\nVoce pode se aposentar");
    }

    if (sexo == 'F' || sexo == 'f') {

      if (idade < 58) {
        tempo = 58 - idade;
        printf ("\nParece que ainda faltam %d anos de idade pra voce poder se aposentar..", tempo);

         printf("\n");

      } if (cont < 30) {
        tempo = 30 - cont;
        printf ("\nParece que ainda faltam %d anos de trabalho pra voce poder se aposentar..", tempo);}
    }


      if (sexo == 'M' || sexo == 'm') {

      if (idade < 63) {
        tempo = 63 - idade;
        printf ("\nParece que ainda faltam %d anos de idade pra voce poder se aposentar..", tempo);

         printf("\n");

     } if (cont < 35) {
        tempo = 35 - cont;
        printf ("\nParece que ainda faltam %d anos de trabalho pra voce poder se aposentar..", tempo);
        }
    }


    printf("\n\n");
    return 0;
}
