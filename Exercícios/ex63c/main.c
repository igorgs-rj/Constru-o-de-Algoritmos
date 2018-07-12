#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, maioraltura = 0.2, menoraltura = 1000, mediamulher = 0, conthomens,contmulher = 0, cont = 0;
    char sexo[15];
    while (cont <= 9)
    {
        cont++;
        printf("Digite sua altura: \n");
            scanf("%f", &altura);
        printf("Digite seu sexo: FEMININO/MASCULINO \n");
            scanf("%s", sexo);
            if (strcmp(sexo,"FEMININO")==0)
            {
                contmulher++;
               mediamulher += altura;
            }
            else if (strcmp(sexo,"MASCULINO")==0)
            {
             conthomens++;
            }
            else
            {
                printf("O nome de sexo digitado e invalido");
            }
            if (menoraltura > altura)
                menoraltura = altura;
            if (maioraltura < altura)
                maioraltura = altura;
    }
    mediamulher /= contmulher;
    printf("A maior altura e:  %.2f\n", maioraltura);
    printf("A menor altura e:  %.2f\n\n\n", menoraltura);
    printf("A media de altura das mulheres e:  %.2f\n", mediamulher);
    printf("O numero de homens e:  %.1f", conthomens);
    return 0;
}
