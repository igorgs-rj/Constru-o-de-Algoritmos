#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, auxiliar;

    printf("Digite um numero qual deseja saber o fatorial..:  \n");
        scanf("%i", &N);
        auxiliar = N-1;
    do
    {
       N *= auxiliar;
       auxiliar--;
    }
    while (auxiliar >= 1);
    printf("O fatorial e..: %i ", N);
return 0;
}
