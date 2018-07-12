#include <stdio.h>
#include <math.h>

void main(void)
{
    const float PI = 3.14;
    float r,area,vol;

    printf("Digite o raio do circulo: ");
        scanf("%f", &r);

    area = 4*PI*pow(r,2);
    vol = 4/3.0 * PI * pow(r,3);
    printf("A area do triangulo e de %.2f e seu volume e de %.2f", area,vol);


}
