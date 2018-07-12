#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct exercicio91
   {
    char funcionario[40];
    char nome[20];
    char End[100];
    int CPF;
    float DTNASC;
    int TEMDEPEND;
    char sexo[10];
    int horastrab;
   };
   struct exercicio91 teste;

   printf("Digite o nome do funcionario ");
    scanf("%s", teste.funcionario);
    printf("Nome do funcionario e..:  %s", teste.funcionario);
}
