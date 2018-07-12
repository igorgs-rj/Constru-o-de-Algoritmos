#include <stdio.h>
#include <stdlib.h>

int main()
{
    const TAM = 4;
    int mat[TAM][TAM], i, j, aux, vet[TAM];
    printf("Preencha a matriz");
    for (i = 0; i < TAM ; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%i", &mat[i][j]);
        }
    }
    for (i = 0; i < TAM ; i++)
    {
        for (j = 0; j < TAM; j++)
        {
              if ( i == 0 && j >= i)
                mat[i][j] = mat[i+3][j];
            else if (i == 3)
                mat[i][j] = mat[i-3][j];
                else
                {
                    continue;
                }
                printf("%i", mat[i][j]);
        }
    }
    return 0;
}
