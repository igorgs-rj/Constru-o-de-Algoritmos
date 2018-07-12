#include <stdio.h>
#include <stdlib.h>

int main()
{
    float av1, av2, media;
    do
    {
    printf("Digite a primeira e a segunda nota do aluno..: \n");
        scanf("%f%f", &av1,&av2);
    }
    while (av1 < 0.0 || av1 > 10.0 || av2 < 0.0 || av2 > 10.0);
    media = (av1+av2)/2;
    printf("A media do aluno e..: %.2f", media);
    return 0;
}
