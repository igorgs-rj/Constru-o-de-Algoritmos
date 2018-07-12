#include <stdio.h>

/*
20 - Uma equipe deseja calcular o n�mero m�nimo de
litros de combust�vel, que deve ser colocado no tanque
de um carro de corrida, para que este possa completar
um determinado n�mero de voltas em um circuito, at� o
primeiro reabastecimento. Ler o comprimento da pista
(em metros), o n�mero total de voltas a serem percorridas,
o n�mero de reabastecimentos desejados e o consumo do carro
(em Km/l). Em seguida, calcular e escrever o n�mero m�nimo
de litros necess�rios para completar as voltas at� o primeiro
reabastecimento. Considerar que o n�mero de voltas entre os
reabastecimentos � o mesmo.
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
    printf("O numero de litros necessarios � de: %.2f", litros);
}
