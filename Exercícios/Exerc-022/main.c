#include <stdio.h>

/*22 - Ler um valor e escrever se é par ou ímpar.
*/

void main(void)
{
    int num;
    float ctrl;

    printf("Digite um numero:");
        scanf("%i", &num);
    if((num&2)==0)
        printf("Esse numero e par.");
    else
        printf("Esse numero e impar.");
	
	getchar();
}
