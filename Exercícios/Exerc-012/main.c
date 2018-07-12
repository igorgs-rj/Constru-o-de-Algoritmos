#include <stdio.h>

/*
12 - Ler o salário mensal de uma pessoa e
o percentual de reajuste, calcular e escrever
 o valor do salário reajustado.
 */

 void main(void)
 {
     float salM, perc,salR;

     printf("Digite o salario mensal: ");
        scanf("%f", &salM);
     printf("Digite o percentual de reajuste: ");
        scanf("%f", &perc);

     salR = salM + (salM * perc)/100;
     printf("O salario reajustado e de R$%.2f ", salR);

 }
