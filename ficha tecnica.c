#include <stdio.h>


int main() {


char nome [50];
float peso, altura;
int idade;

printf("Digite seu nome: ");
scanf(" %s",&nome);

printf("Digite seu peso: ");
scanf(" %f",&peso);

printf("Digite sua altura: ");
scanf(" %f",&altura);

printf("Digite sua idade: ");
scanf(" %i",&idade);

printf("\n\n");

printf("Ficha Tecnica de Cadastro");
printf("\nNome: %s",nome);
printf("\nPeso: %.2f",peso);
printf("\nAltura: %.2f",altura);
printf("\nIdade: %i",idade);
printf("\n\n");

printf("Seja Bem Vindo!");


printf("\n\n");
}
