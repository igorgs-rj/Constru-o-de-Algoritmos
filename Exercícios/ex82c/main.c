#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAM = 3;
    int mat[TAM][TAM], i,j;
    for (i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            scanf("%i", &mat[i][j]);
            if (j > i)
            {
                mat[i][j] = 0;
            }
        }
    }
    for (i = 0; i < TAM; i++)
    {
        for(j= 0; j < TAM; j++)
        {
            printf("%i", mat[i][j]);
        }
    }
    return 0;
}
