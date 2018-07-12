#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nominador = 1, denominador = 1, auxiliar = 0;
    float h;
        printf("Digite o numero da sequencia qual deseja saber  \n");
            scanf("%i",&n);
    do
    {
       h += (nominador)*1.0/ denominador;
       denominador++;
       auxiliar++;
    }
    while (auxiliar < n);
    printf("%0.2f", h);
    return 0;
}
