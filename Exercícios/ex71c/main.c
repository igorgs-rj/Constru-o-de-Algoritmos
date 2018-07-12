#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],i;
    printf("Digite o vetor..:  \n");
    for (i = 0; i<10;i++)
    {
        scanf("%i", &vet[i]);
        if (vet[i] < 0)
        {
          vet[i] = 0;
        }
    }
    for (i = 0; i<10; i++ )
        printf("%i\n", vet[i]);
    return 0;
}
