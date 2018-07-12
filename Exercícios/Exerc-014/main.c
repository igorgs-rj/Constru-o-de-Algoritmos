#include <stdio.h>

void main (void)
{
    float custo_fab, custo_fin;
    const float imp = 0.45;
    const float perc = 0.28;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fab);

    custo_fin = custo_fab + (custo_fab * (imp + perc));
    printf("O custo final do carro eh de R$%.2f ", custo_fin);
}
