#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x,y;
    char sim[20], simnao[] = "SIM";
    while (simnao != sim);
    {
    printf("Digite os dois valores");
        scanf("%i%i",&x,&y);
            if (x == 0 || y == 0)
            {
              printf("Divisão invalida!");
            }
              else
                x /= y;
                printf("A divisao e ", x);

    printf("Deseja continuar? SIM/NAO \n");
        scanf("%s",sim);


    }
    return 0;
}
