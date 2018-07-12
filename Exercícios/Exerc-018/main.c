#include <stdio.h>

/*
18 - Uma caixa de azulejos tem material suficiente para
cobrir uma área de 1,5 m2. Ler as dimensões (comprimento,
largura e altura) de uma cozinha retangular, calcular e
escrever a quantidade de caixas de azulejos necessárias
para cobrir todas as paredes. Considerar que não será
descontada a área ocupada por portas e janelas.
*/

void main(void)
{
    float l,c,alt,azul,qtd;
    const float caixa = 1.5;

    printf("Digite o comprimento da parede: ");
        scanf("%f", &c);
    printf("Digite a largura da parede: ");
        scanf("%f", &l);
    printf("Digite a altura da parede: ");
        scanf("%f", alt);

    azul = (c*l) + 2*(l*alt) + 2*(c*alt);

    qtd = azul / caixa;
    printf("A quantidade de caixas de azulejos é de %f ", qtd);
}
