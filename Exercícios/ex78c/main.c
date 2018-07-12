#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAM = 2;
    int mat1[TAM][TAM], mat2[TAM][TAM], mat3[TAM][TAM], i, j;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("\nPreencha a matriz 1 de coordenadas [%i][%i] -->  ", i,j);
                scanf("%i", &mat1[i][j]);
            printf("\nPreencha a matriz 2 de coordenadas [%i][%i] -->  ", i,j);
                scanf("%i", &mat2[i][j]);
                    if (mat1[i][j] > mat2[i][j])
                    {
                        mat3[i][j] = mat1[i][j];
                    }
                    else
                    {
                        mat3[i][j] = mat2[i][j];
                    }
        }
    }
     for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%i\n", mat3[i][j]);
        }
    }
    return 0;
}
