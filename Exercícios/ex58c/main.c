#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, a = 0;
    printf("Digite um numero qual deseja saber se e perfeito..: \n");
        scanf("%i", &n);
    for (i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
          a += i;
        }
    }
        if (a == n)
        {
            printf("O numero e perfeito!!! ");
        }
        else
            printf("O numero nao e perfeito, pois a soma dos seus divisores e..:  %i",a);
    return 0;
}
