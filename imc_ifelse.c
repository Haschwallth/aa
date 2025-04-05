#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imc, peso_min, peso_max;
    char sexo;

    printf ("Diga-me se voce e homem ou mulher (F/M): ");
    scanf(" %c", &sexo);

    printf ("\nDigite o seu peso(kg) ");
    scanf(" %f", &peso);

    printf ("\nDigite a sua altura(m) ");
    scanf(" %f", &altura);

    imc = peso / (altura * altura);

    if (sexo == 'F' || sexo == 'f') {

    if (imc < 19.1) {
    printf ("\nSeu imc e %.2f. Voce esta abaixo do peso!", imc);

    } else if (imc >= 19.1 && imc <= 25.8) {
    printf ("\nSeu imc e %.2f. Voce esta no peso ideal!", imc);

    } else if (imc >= 25.9 && imc <= 27.3) {
    printf ("\nSeu imc e %.2f. Voce esta um pouco acima do peso!", imc);

    } else if (imc >= 27.4 && imc <= 32.3) {
    printf ("\nSeu imc e %.2f. Voce esta acima do peso!", imc);

    } else if (imc > 32.4) {
    printf ("\nSeu imc e %.2f. Voce esta em estado de obesidade!", imc);}

    peso_min = 19.1 * (altura * altura);
    peso_max = 25.8 * (altura * altura);

    printf ("\nPara ter um imc ideal, voce precisaria pesar entre %.2f e %.2f kg.", peso_min, peso_max);


    }

    if (sexo == 'M' || sexo == 'm') {

    if (imc < 20.7) {
    printf ("\nSeu imc e %.2f. Voce esta abaixo do peso!", imc);

    } else if (imc >= 20.7 && imc <= 26.4) {
    printf ("\nSeu imc e %.2f. Voce esta no peso ideal!", imc);

    } else if (imc >= 26,5 && imc <= 27.8) {
    printf ("\nSeu imc e %.2f. Voce esta um pouco acima do peso!", imc);

    } else if (imc >= 27.9 && imc <= 31.1) {
    printf ("\nSeu imc e %.2f. Voce esta acima do peso!", imc);

    } else if (imc > 31.2) {
    printf ("\nSeu imc e %.2f. Voce esta em estado de obesidade!", imc);}

    peso_min = 20.7 * (altura * altura);
    peso_max = 26.4 * (altura * altura);

    printf ("\nPara ter um imc ideal, voce precisaria pesar entre %.2f e %.2f kg.", peso_min, peso_max);
    }


    printf("\n\n");
    return 0;
}
