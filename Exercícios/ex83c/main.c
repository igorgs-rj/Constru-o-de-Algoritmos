#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAM = 3;
    int mat[TAM][TAM], i, j, soma=0, aux = 0, maior;
    printf("Preencha a matriz");
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%i", &mat[i][j]);
        }
    }
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i == j)
            {
              if (mat[i][j] > aux)
              {
                  maior = mat[i][j];
                  aux = maior;
              }
            }
            if ((i+j) == (TAM-1))
            {
               soma += mat[i][j];
            }
            printf("%i\n", mat[i][j]);
        }
    }
    printf("\nO maior valor na diagonal principal da matriz e..:  %i\n", maior);
    printf("A soma dos valores da diagonal secundaria e..: %i\n", soma);
    return 0;
}
