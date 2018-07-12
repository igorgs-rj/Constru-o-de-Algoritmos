#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, a = 0, c;
    char nome[20], b[20];

    do
    {
        printf("Digite o nome da candidata: \n");
            scanf("%s", nome);
            fflush(stdin);
        printf("Digite a altura da candidata: \n");
            scanf("%f", &altura);
            fflush(stdin);
        if (strcmp(nome, "fim")==0)
            c = 0;
            if (a < altura)
            {
            a = altura;
            strcpy(b,nome);
            }
    }
    while (c != 0);
    printf("A altura da maior candidata e %.2f e o nome e %s", a, b);

    return 0;
}
