#include <stdio.h>

/*
16 - O custo do seguro contra granizo numa comunidade
t�pica de fazendeiros � 3,5% do valor de cobertura
solicitado por acre, multiplicado pelo n�mero de acres
plantados. Supondo que as possibilidades de colheitas
sejam limitadas a trigo, aveia e cevada, ler a cobertura
desejada e o n�mero de acres plantados para cada uma das
tr�s planta��es e calcular e escrever o custo total do
pr�mio do seguro.
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
