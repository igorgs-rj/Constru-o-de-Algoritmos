#include <stdio.h>

/*Ler o número de eleitores de um município
e o número de votos brancos, nulos e válidos.
Em seguida, calcular e escrever o percentual
que cada tipo de voto representa em relação
ao total de eleitores.
*/

void main (void)
{
    int eleit,vtB,vtN,vtV;
    float percB,percN, percV;

    printf("Digite o numero de eleitores: ");
        scanf("%i", &eleit);
    printf("\nDigite o numero de votos em branco: ");
        scanf("%i", &vtB);
    printf("\nDigite o numero de votos nulos: ");
        scanf("%i", &vtN);
    printf("\nDigite o numero de votos validos: ");
        scanf("%i", &vtV);

    percV = 100*vtV/eleit;
    percB = 100*vtB/eleit;
    percN = 100*vtN/eleit;

    printf("\nO numero de votos validos e de: %.1f%%", percV);
    printf("\nO numero de votos em branco e de: %.1f%%", percB);
    printf("\nO numero de votos nulos e de: %.1f%%\n", percN);
}
