#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, mat[2][2], maior = 0, linha, coluna;
   	for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
        printf("Informe o valor da Matriz[%d][%d]= ", i,j);
            scanf("%d",&mat[i][j]);
            if(mat[i][j] > maior)
            maior = mat[i][j];
            linha = i;
            coluna = j;
        }

    }

printf("O maior valor é: %d\n", maior);
printf("O maior valor esta localizado em: %i %i ", linha, coluna);

}
