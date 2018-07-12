#include <stdio.h>

/*
23 - Ler dois valores e escrever o maior deles.
*/

void main(void)
{
    float valor1,valor2;

    printf("Digite o primeiro valor: ");
        scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
        scanf("%f", &valor2);

    if (valor1 > valor2)
        printf("O maior valor e %.2f",valor1);
    else if (valor1 < valor2)
        printf("O maior valor e %.2f", valor2);
    else
        printf("Sao iguais.");
}
