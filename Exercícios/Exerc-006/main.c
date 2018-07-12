#include <stdio.h>

void main(void)
{
    int ant, suc, num;

    printf("Digite um número inteiro: ");
        scanf("%i", &num);

    ant = num-1;
    suc = num+1;

    printf("O seu antecessor e %i\n", ant);
    printf("O seu sucessor e %i\n", suc);
}
