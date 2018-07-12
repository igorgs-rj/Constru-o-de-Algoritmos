#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20], sobrenome[20], pessoa3nome[20], pessoa3sobre[20];
    int idade,i = 0, soma, idade3pessoa;
    while (i < 5)
    {
    printf("Digite o primeiro nome:\n");
        scanf("%s", nome);
    printf("Digite o sobrenome: \n");
        scanf("%s", sobrenome);
    printf("Digite a idade: \n");
        scanf("%i", &idade);
    soma += idade;
        if (i == 2)
        {
         strcpy(pessoa3nome,nome);
         strcpy(pessoa3sobre,sobrenome);
        idade3pessoa = idade;
        }
        i++;
    }
    printf("O nome da terceira pessoa e:  %s %s  \n E sua idade e:  %i \n E a soma das idades das 5 pessoas e:  %i",
           pessoa3nome, pessoa3sobre, idade3pessoa, soma);

    return 0;
}
