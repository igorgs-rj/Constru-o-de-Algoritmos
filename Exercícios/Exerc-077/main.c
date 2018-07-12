#include <stdio.h>

void main(void)
{
    const int TAM = 5;
    int mat[TAM][TAM];
    int i,j;

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
            {
                if (i == j )
                    mat[i][j] = 1;
                else
                    mat[i][j] = 0;
                printf("%i ",  mat[i][j]);
            }
            printf("\n");
    }

}
