#include <stdio.h>
#include <math.h>

void main(void)
{
    float s1,s2,s3,area, t;

    printf("Digite o comprimento dos lados de um triângulo: \n");
    printf("Digite o 1 lado: ");
        scanf("%f", &s1);
    printf("Digite o 2 lado: ");
        scanf("%f", &s2);
    printf("Digite o 3 lado: ");
        scanf("%f", &s3);

    t = (s1+s2+s3)/2;
    area = sqrt(t*(t-s1)*(t-s2)*(t-s3));
    printf("A area do triangulo eh de: %.2f", area);
}
