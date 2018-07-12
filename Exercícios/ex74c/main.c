#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void main(void)
{
    const TAM = 80;
    char vet[TAM];
    int i,j;
    printf("Digite a sequencia de caracteres..:  ");
    gets(vet);
    for (i = 0; 1 <TAM; i++)
    {
        if(vet[i] ==' ')
                for (j = i; j < TAM; j++)
                {
                    vet[j] = vet[j+1];
                }
        else
            continue;
    }
    printf("\n%s\n", vet);
}
