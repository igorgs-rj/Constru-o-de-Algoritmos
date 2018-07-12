#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[12], i, x,y,soma;
    printf("Digite os 12 valores do vetor..:  \n");
        for (i = 1; i <= 12; i++)
        {
            scanf("%i", &vet[i]);
        }
    printf("Digite duas localizacoes do vetor que deseja somar..: \n");
        scanf("%i%i", &x,&y);
        soma = vet[x]+vet[y];
    printf("A soma destas duas localizacoes e..: %i", soma);

    return 0;
}
