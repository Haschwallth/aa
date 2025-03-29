#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;


    printf("informe seu peso: ");
    scanf("%f",&peso);
    printf("informe sua altura: ");
    scanf("%f",&altura);

    imc = peso/(altura*altura);
    printf("seu IMC e: %f",imc);

    printf("\n\n");

    printf("\nmenor do que 18,5: baixo peso");
    printf("\nentre 18,5 e 24,9: ideal");
    printf("\nentre 25 e 29,9: sobrepeso");
    printf("\nentre 30 e 34,9: obesidade grau I");
    printf("\nentre entre 35 e 39,9: obesidade grau II");
    printf("\nmaior ou igual a 40: obesidade grau III");



    printf("\n\n");

}
