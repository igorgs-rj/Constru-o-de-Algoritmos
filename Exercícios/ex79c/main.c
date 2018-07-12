#include <stdio.h>
#include <stdlib.h>

 main()
{
    const int TAM = 2;
    int mat[TAM][TAM], i,j, cont = 0, soma = 0;
    for (i = 0; i < TAM;i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("Preencha a matriz na posicao [%i][%i] --> ", i, j);
                scanf("%i", &mat[i][j]);
                if (mat[i][j]> 10)
                {
                    cont++;
                    soma += mat[i][j];
                }
                else
                    continue;
        }
    }
    printf("Esta matriz tem | %i |  elementos maiores que 10!", cont);
    printf("\nA soma dos elementos maiores que 10 desta matriz e..:  %i", soma);

}
