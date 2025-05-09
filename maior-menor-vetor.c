#include <stdio.h>

int main () {

    int vtr[5];
    int maior;
    int menor;
    int i = 0;

   printf("escreva 5 numeros a sua escolha:");
   printf("\n  ");
   scanf("%d", &vtr[0]);
   printf("\n  ");
   scanf("%d", &vtr[1]);
   printf("\n  ");
   scanf("%d", &vtr[2]);
   printf("\n  ");
   scanf("%d", &vtr[3]);
   printf("\n  ");
   scanf("%d", &vtr[4]);

    maior = vtr[0];
    if (vtr[1] > maior) maior = vtr[1];
    if (vtr[2] > maior) maior = vtr[2];
    if (vtr[3] > maior) maior = vtr[3];
    if (vtr[4] > maior) maior = vtr[4];

    menor = vtr[0];
    if (vtr[1] < menor) menor = vtr[1];
    if (vtr[2] < menor) menor = vtr[2];
    if (vtr[3] < menor) menor = vtr[3];
    if (vtr[4] < menor) menor = vtr[4];

    printf("0 maior numero e %d e o menor e %d", maior, menor);
    return 0;
}
