#include <stdio.h>


void main(void)
{
    int h1,h2,m1,m2;

    printf("Digite a hora inicial: ");
        scanf("%i", &h1);
    printf("Digite o minuto inicial: ");
        scanf("%i", &m1);
    printf("Digite a hora final: ");
        scanf("%i", &h2);
    printf("Digite a minuto final: ");
        scanf("%i", &m2);

    if ((h1==h2) && (m1==m2))
            printf("O jogo durou 24 hora(s) e 0 minuto(s)");
    else if ((h1==h2) && (m2 > m1))
            printf("O jogo durou %i hora(s) e %i minuto(s)", (h1-h2), (m2-m1));
        else if ((h1==h2) && (m2 < m1))
                printf("Horario invalido");
            else if ((h2>h1) && (h2 <=24)) {
                    printf("O jogo durou %i hora(s) e %i minuto(s)", (h2-h1), ((60-m1)+ m2));
                } else if (h1 > h2)
                        printf("O jogo durou %i hora(s) e %i minuto(s)", ((24-h1-1)+h2), ((60-m1)+m2));

}
