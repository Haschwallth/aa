#include <stdio.h>

 int main() {

int vtr[10];
int i = 0;
int soma = 0;

for (int i=0; i<11; i++) {

printf ("\nEscreva um numero inteiro: ");
scanf ("%d", &vtr[i]);

soma+=vtr[1];
}

printf ("\nO resultado e igual a %d" ,soma);

return 0;


}
