#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, numerador = 1, cont = 0;
    float s;
        printf("Digite um valor da sequencia que deseja saber:  \n");
            scanf("%i", &n);
    do
    {
        s += (float)numerador / (n - cont);
        cont++;
        numerador++;
    }
    while (cont <= n-1);
        printf("O valor %i da sequencia e:  %.2f", n, s);
    return 0;
}
