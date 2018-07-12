#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAM = 3;
    int mat[TAM][TAM], i ,j;
    for (i = 0; i< TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("Preencha a matria [%i][%i] -> ", i,j);
            scanf("%i", &mat[i][j]);
                if (i == j)
                    mat[i][j] = 1;
                else if (i != j)
                    mat[i][j] = 0;
        }
    }
    for (i = 0; i< TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%i  \n", mat[i][j]);
        }
    }
    return 0;
}
