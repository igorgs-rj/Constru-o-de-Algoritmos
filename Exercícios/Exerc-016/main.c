#include <stdio.h>

/*
16 - O custo do seguro contra granizo numa comunidade
típica de fazendeiros é 3,5% do valor de cobertura
solicitado por acre, multiplicado pelo número de acres
plantados. Supondo que as possibilidades de colheitas
sejam limitadas a trigo, aveia e cevada, ler a cobertura
desejada e o número de acres plantados para cada uma das
três plantações e calcular e escrever o custo total do
prêmio do seguro.
*/

void main(void)
{
    int cob, acresT, acresA, acresC;
    float total;

    printf("Digite a cobertura desejada: ");
        scanf("%i", &cob);
    printf("\nDigite o numero de acres de trigo plantados: ");
        scanf("%i", &acresT);
    printf("\nDigite o numero de acres de amido plantados: ");
        scanf("%i", &acresA);
    printf("\nDigite o numero de acres de cevada plantados: ");
        scanf("%i", &acresC);

    total = (cob * 0,035) * (acresT + acresA + acresC);
    printf("O custo total foi de R$%.2f", total);
}
