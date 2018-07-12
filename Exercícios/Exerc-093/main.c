#include <stdio.h>

void main(void)
{
    struct aviao
    {
       int num_voo;
       char tipo[20];
       float preco;
       int num_lugares;
    };
    struct aviao voos[30];

    int i;

    for (i = 0; i < 5; i++){
        printf("\n-- Informaçoes do voo %i--", i + 1);
        printf("\nEntre com o numero do voo -->  ");
            scanf("%i", &voos[i].num_voo);
        fflush(stdin);
        printf("Entre com o tipo do voo --> ");
            gets(voos[i].tipo);
        printf("Entre com o preço do voo --> ");
            scanf("%f", &voos[i].preco);
        printf("Entre com o numero de lugares -->");
            scanf("%i", &voos[i].num_lugares);
    }
}
