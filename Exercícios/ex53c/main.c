#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, numerador = 1, denominador = 1, auxiliar = 1, contador = 0;
    float S = 0;
    printf("Digite um valor da sequencia qual deseja saber: \n ");
        scanf("%i", &N);
    do
    {

        if ((auxiliar % 2) == 0)
        {
            S += (numerador)/ pow(denominador,3);
        }
        else
        {
            S += (numerador)/ pow(denominador,3);
        }
            denominador += 2;
            contador++;
    }
    while(contador <= N);
    S = 1 - S;
    contador = (S*32);
    S = pow(contador, 1.0/3.0);
    printf("O valor de pi para o numero digitado e..: %.2f", S);
    return 0;
}
