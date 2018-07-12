#include <stdio.h>

void main(void)
{
    float c,f;

    printf("Digite a temperatura em graus Fahreheit: ");
    scanf("%f", &f);

    c= 5*((f - 32)/9);
    printf("\nA temperatura em celsius e: %.1f \n", c);
}
