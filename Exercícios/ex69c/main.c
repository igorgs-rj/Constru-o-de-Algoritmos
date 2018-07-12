#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[20], x, i, cont = 0, aux = 1;
    printf("Preencha o vetor:  \n");
    for (i = 0; i < 20 ; i++)
    {
        scanf("%i", &vet[i]);
    }
    printf("Digite um valor que deseja procurar no vetor digitado..:  ");
    scanf("%i", &x);
    for (i = 0; i < 20; i++)
    {
        cont++;
        if (vet[i] == x)
        {
            printf("O valor digitado esta na posição %i do vetor", cont);
            aux = 0;
        }
    }
    if (aux = 1)
        printf("O valor nao foi encontrado!!!");
    return 0;
}
