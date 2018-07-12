#include <stdio.h>

/*Ler uma quantidade de chuva dada em polegadas,
calcular e escrever o valor equivalente em milímetros.
Sabe-se que 1 corresponde a 25,4mm. */

void main (void)
{
    float chuvaP,chuvaM;
    const float pol = 25.4;

    printf("Digite a quantidade de chuva em polegadas: ");
        scanf("%f", &chuvaP);

    chuvaM = chuvaP * pol;
    printf("\nA quantidade de chuva em milimetros e de %.1fmm\n", chuvaM);

}
