#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    ESCOLHA:


    printf ("Escolha um genero de filme:");

    printf ("\n1 Acao");
    printf ("\n2 Comedia");
    printf ("\n3 Drama");
    printf ("\n4 Ficcao Cientifica");
    printf ("\n5 Terror");
    printf ("\n\n");

    scanf("%d", &choice);

    switch (choice) {

    case 1:
        printf ("\n");
        printf ("\nFilmes de Acao:");
        printf ("\n");
        printf ("\n1 Mad Max: Estrada da Furia");
        printf ("\n2 John Wick");
        printf ("\n3 Missao Impossivel");
        printf ("\n\n");
        break;


    case 2:
        printf ("\n");
        printf ("\nFilmes de Comedia:");
        printf ("\n");
        printf ("\n1 As Branquelas");
        printf ("\n2 O Maskara");
        printf ("\n3 Se Beber, Nao Case");
        printf ("\n\n");
        break;

    case 3:
        printf ("\n");
        printf ("\nFilmes de Drama:");
        printf ("\n");
        printf ("\n1 A Procura da Felicidade");
        printf ("\n2 Clube da Luta");
        printf ("\n3 O Curioso Caso de Benjamin Button");
        printf ("\n\n");
        break;

    case 4:
        printf ("\n");
        printf ("\nFilmes de Ficcao Cientifica:");
        printf ("\n");
        printf ("\n1 Interestelar");
        printf ("\n2 Matrix");
        printf ("\n3 Blade Runner 2049");
        printf ("\n\n");
        break;

    case 5:
        printf ("\n");
        printf ("\nFilmes de Terror:");
        printf ("\n");
        printf ("\n1 Invocacao do Mal");
        printf ("\n2 It: A Coisa");
        printf ("\n3 O Exorcista");
        printf ("\n\n");
        break;

    default:
        printf ("opcao invalida");
         break;


    }


    printf("\n\n");
    return 0;
}
