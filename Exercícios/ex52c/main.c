#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, auxiliar, a = 1, b = 1, parada = 2;
    printf("Digite o termo da serie fibonacci que deseja saber ");
        scanf("%i", &N);
    do
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        parada++;
    }
    while (parada < N);
     if (N == 1 || N == 2)
        {
            printf("O primeiro numero do termo e..: 1 \n");
        }
    else
    printf("O numero %i da sequencia fibonacci e: %i \n", N, auxiliar);
    return 0;
}
