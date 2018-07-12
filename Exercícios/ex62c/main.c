#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    float x;
    do
    {
    printf("Digite dois valores quais deseja dividir \n");
        scanf("%f%i",&x,&y);
        x /= y;
    }
    while (y == 0);
    printf("O resultado da divisao e..:  %.2f \n", x);

    return 0;
}
