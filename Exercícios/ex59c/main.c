#include <stdio.h>
#include <stdlib.h>

int main()
{
 int primo, i, j;
    for (i = 100; i <= 1000; i++);
    {
     for (j = 2; j < i; j++);
     {
        if ((i % j) == 0)
            printf("O numer nao e primo!!! %i \n", primo);
        else
            printf("O numero e primo!!! %i \n", primo);
     }
    }
    return 0;
}
