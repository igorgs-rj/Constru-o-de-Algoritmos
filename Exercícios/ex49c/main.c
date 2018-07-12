#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int av1, av2, a;
    char aluno [50], simnao[6];
    float media;
   do
   {
       printf("Digite o nome do aluno...:\n");
        scanf("%s", aluno);

        printf("Digite a nota do aluno na primera prova e em seguida, na segunda prova...:  \n");
        scanf("%i%i", &av1, &av2);

        media = (av1*1.0 + av2) / 2 ;
            if (media >= 6)
                printf("O aluno foi aprovado, a media foi; %0.2f\n", media);
            else if (media >=4)
                printf("O aluno devera fazer a terceira avaliacao, a media foi; %0.2f\n", media);
            else
                printf("O aluno foi reprovado, a media foi; %0.2f\n", media);
        printf("Deseja continuar? SIM/NAO \n");
            scanf("%s", simnao);
        a = (strcmp(simnao, "SIM"));

   }
   while (a == 0);
}
