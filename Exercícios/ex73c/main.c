#include <stdio.h>
#include <stdlib.h>

int main()
{
    const TAM = 10;
    int vet[TAM], i, a;
    for (i = 0; i < TAM; i++)
    {
        printf("Preencha o vetor na posicao %i -->", i);
        scanf("%i", &vet[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        a = vet[i];
        vet[i+1] += a;
          printf("%i\n", vet[i]);
    }

    return 0;
}
