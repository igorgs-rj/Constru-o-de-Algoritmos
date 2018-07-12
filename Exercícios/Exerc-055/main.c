#include <stdio.h>

/*
55 - Ler um valor inteiro positivo N, calcular e escrever o valor de S, que é dado por:
*/

void main(void)
{
    int n,cont;
    float s;

    printf("Entre com o valor positivo de n: ");
        scanf("%i", &n);

    cont = 1;
    s = 0.0;
    while(cont <= n)
    {
        s += (float)cont/(n-cont+1);
        cont++;
    }
    printf("O resultado e %.2f ", s);
}
