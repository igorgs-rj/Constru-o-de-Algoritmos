#include <stdio.h>

/*
24 - Ler três valores e escrever o menor deles.
*/

void main(void)
{
    int valor1, valor2,valor3;

    printf("Digite o primeiro valor: ");
        scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
        scanf("%i", &valor2);
    printf("Digite o terceiro valor: ");
        scanf("%i", &valor3);

    if ((valor1 < valor2)&& (valor1 < valor3))
        printf("O menor valor é o %i", valor1);
    else if ((valor2 < valor1)&& (valor2 < valor3))
            printf("O menor valor é o %i", valor2);
        else if ((valor3 < valor2)&& (valor3 < valor1))
                printf("O menor valor é o %i", valor3);
}
