#include <stdio.h>

/*
20 - Uma equipe deseja calcular o número mínimo de
litros de combustível, que deve ser colocado no tanque
de um carro de corrida, para que este possa completar
um determinado número de voltas em um circuito, até o
primeiro reabastecimento. Ler o comprimento da pista
(em metros), o número total de voltas a serem percorridas,
o número de reabastecimentos desejados e o consumo do carro
(em Km/l). Em seguida, calcular e escrever o número mínimo
de litros necessários para completar as voltas até o primeiro
reabastecimento. Considerar que o número de voltas entre os
reabastecimentos é o mesmo.
*/

void main (void)
{
    float compr, voltas, reab, consu, litros;

    printf("Digite o comprimento da via em metros: ");
        scanf("%f", &compr);
    printf("Digite o numero total de voltas a serem percorrias: ");
        scanf("%f", &voltas);
    printf("Digite o consumo do carro: ");
        scanf("%f", &consu);
    printf("Digite o numero de reabastecimentos desejados: ");
        scanf("%f", &reab);

    litros = ((compr * voltas) / consu) / reab ;
    printf("O numero de litros necessarios é de: %.2f", litros);
}
