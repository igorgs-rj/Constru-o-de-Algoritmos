#include <stdio.h>
#include <stdlib.h>

void main()
{
    const int TAM = 3;
    int mat1[TAM][TAM], mat2[TAM][TAM], i, j, k, l, p = 0, vet[30];
    printf("Preencha as duas matrizes..: \n");
    for (i = 0; i < TAM ; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("Preencha a matriz 1 na posicao [%i][%i] --> ", i, j);
                scanf("%i", &mat1[i][j]);
            printf("Preencha a matriz 2 na posicao [%i][%i] --> ", i, j);
                scanf("%i", &mat2[i][j]);
        }
    }
    for (i = 0; i < TAM ; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            for (k = 0; k < TAM; k++)
            {
                for (l = 0; l < TAM; l++)
                {
                    if (mat1[i][j] == mat2[k][l])
                    {
                        printf("%i", mat1[i][j]);
                        printf("\nLinha: | %i | e coluna | %i | \n", k,l);
                    }
                }
            }
        }
    }
}
