#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAM = 3;
    int mat[TAM][TAM], i, j, soma1, soma2, soma3, somadp = 0, somads = 0, somalinha = 0, somacoluna = 0, verdadeiro; // Diagonal Principal e Diagonal Secundaria
    printf("Preencha o vetor \n");
    // Lê a matriz
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("\nPreencha o vetor na posicao [%i][%i]  -->  ", i, j);
                scanf("%i", &mat[i][j]);
        }
    }
    // Parte logica do quadrado magico
     for (i = 0; i < TAM; i++)
    {
    somacoluna += mat[i][0]; // testando coluna 1
        for (j = 0; j < TAM; j++);
        {
           somalinha += mat[0][j]; // testando linha 1
           if(somalinha != somacoluna)
            {
                verdadeiro=0;
            }
            if (i == j) // diagonal principal
            {
                somadp +=  mat[i][j];
            }
            if ((i+j) == TAM-1) // diagonal secundaria
            {
                somads += mat[i][j];
            }
            if (i == 2)
            {
               soma1 += mat[i][j];
            }
            if (i == 3)
            {
                soma2 += mat[i][j];
            }
            if (i == 0)
            {
                soma3 += mat[i][j];
            }
        }

    }
    if (somalinha == somads == somadp ==soma1 == soma2 == soma3 == somacoluna)
        printf("O quadrado e magico!! ");
    else
        printf("O quadrado nao e magico!! ");
    return 0;
}
