#include <stdio.h>

/*
21 - Ler um valor e escrever se � positivo, negativo ou zero.
*/

void main(void)
{
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num > 0)
        printf("\nO numero e positivo.");
    else if (num < 0)
            printf("\nO numero e negativo");
        else
            printf("\n O numero e zero");
}
