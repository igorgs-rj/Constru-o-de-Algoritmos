#include <stdio.h>

/*Ler o n�mero de eleitores de um munic�pio
e o n�mero de votos brancos, nulos e v�lidos.
Em seguida, calcular e escrever o percentual
que cada tipo de voto representa em rela��o
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
