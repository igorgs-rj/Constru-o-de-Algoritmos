#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, cont1 =0 , cont2 = 0, cont3 = 0, cont4 = 0;
    do
    {
    printf("Digite um numero..: \n ");
        scanf("%i", &x);
        if (x>=0 && x<=25)
        {
            cont1++;
        }
        else if (x>=26 && x<=50)
        {
            cont2++;
        }
        else if (x>=51 && x<=75)
        {
            cont3++;
        }
        else if (x>=76 && x<=100)
        {
            cont4++;
        }
        else if (x > 100)
            printf("Numeros acima de 100 nao sao aceitos!! \n\n");
    }
    while (x > 0);
        printf("Os numeros digitados entre 0 e 25 sao..:  %i\n",cont1);
        printf("Os numeros digitados entre 26 e 50 sao..: %i\n",cont2);
        printf("Os numeros digitados entre 51 e 75 sao..: %i\n",cont3);
        printf("Os numeros digitads entre 76 e 100 sao..: %i\n", cont4);
    return 0;
}
