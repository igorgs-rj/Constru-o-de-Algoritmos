#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAM = 2;
    int mat1[TAM][TAM], i, j, cont = 1, cont2 = 1, soma = 0, cont3 = 0;
    float mat2[TAM][TAM], media;
    printf("Preencha a com os dados\n");
    // Lê a matriz com a idade dos alunos
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("Digite a idade do aluno %i -->  ", cont);
                scanf("%i", &mat1[i][j]);
            cont++;
        }
    }
    // Lê a matriz com a altura dos alunos
     for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("Digite a altura do aluno %i -->  ", cont2);
            scanf("%f", &mat2[i][j]);
            soma += mat2[i][j];
            cont2++;
        }
    }
    media = (float)soma / (cont2-1);
    // Faz a parte logica da comparação, aluno > 13 e aluno < media!
      for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (mat1[i][j] > 13)
            {
                if (mat2[i][j] < media)
                {
                cont3++;
                }
            }
        }
    }
    //Imprime o resultado
    printf("O numero de alunos com mais de 13 anos com idade inferior a media da turma e: %i \n", cont3);
    printf("\nA media de altura da turma e..: %.2f",media);
    return 0;
}
