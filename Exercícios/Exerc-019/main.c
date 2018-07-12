#include <stdio.h>

/*
19 - Um motorista de taxi deseja calcular o rendimento
de seu carro na praça. Sabendo-se que o preço do combustível
é de R$2,98 o litro, ler a marcação do odômetro no início
e no fim do dia, o número de litros de combustível gasto e o
valor recebido dos passageiros. Em seguida, calcular e
escrever a média do consumo em Km/l e o lucro líquido do dia.
*/

void main (void)
{
    const float prc = 2.98;
    float odom1,odom2, combG,km,vlr, med, lucro;

    printf("Digite a marcacao inicial do odometro em KM: ");
        scanf("%f", &odom1);
    printf("\nDigite a marcacao final do odometro em KM: ");
        scanf("%f", &odom2);
    printf("\nDigite o numero de litros de combustivel gasto: ");
        scanf("%f", &combG);
    printf("\nDigite o valor recebido dos passageiros: ");
        scanf("%f",&vlr);

    km = odom2 - odom1;
    med = km / combG;
    lucro = prc * combG;

    printf("A media do consumo foi de %.2f Km/l e o lucro liquido de R$%.2f", med,vlr - lucro);



}
