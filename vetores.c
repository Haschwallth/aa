#include <stdio.h>

 int main() {

int vtr[10];
int i = 0;
int soma = 0;

for (int i=0; i<10; i++) {

printf ("\nEscreva um numero inteiro: ");
scanf ("%d", &vtr);

soma+=vtr;
}
soma+=vtr;

printf ("O resultado e igual a %d", soma);


}
