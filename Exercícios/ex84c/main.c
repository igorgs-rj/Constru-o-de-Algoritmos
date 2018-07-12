#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAM = 2;
    int mat[TAM][TAM], i, j, aux;
    printf("Preencha a matriz..: \n");
    for (i = 0; i < TAM; i ++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%i", &mat[i][j]);
            if ((i != j) || (i+j == (TAM-1)))
                {
                    continue;
                }
            else if (mat[i][j] < 0)
                mat[i][j] = 0;
        }
    }
    for ( i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%i", mat[i][j]);
        }
    }
    return 0;
}
