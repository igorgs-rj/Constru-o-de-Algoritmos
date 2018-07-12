#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[16], aux[16], i;
    printf("Preencha o vetor..: \n ");
    for (i = 0; i<=15; i++)
    {
      scanf("%i", &vet[i]);
    }
    for (i = 0; i < 8; i++)
    {
        aux[i] = vet[i+8];
        aux[i+8] = vet[i];
    }
    for (i = 0; i<=15; i++)
    {
        printf("%i \n", aux[i]);
    }

    return 0;
}
