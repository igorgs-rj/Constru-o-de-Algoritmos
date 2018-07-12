#include <stdio.h>

/*
50 - Ler um valor N, calcular e escrever o valor de H, onde H é dado por:
*/

void main(void)
{
    float h;
    int cont,n;

    h = 0.0;
    cont  = 1;

    printf("Entre com o valor de n: ");
        scanf("%i",&n);

    while (cont <= n)
    {
        h = h + 1.0 / cont;
        // h = h + 1 / (float)cont;
        cont++;
    }

    printf("O resultado e %.2f", h);
}
