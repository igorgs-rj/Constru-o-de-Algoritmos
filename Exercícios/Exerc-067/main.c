#include <stdio.h>

/*67 - Declarar um vetor de 10 posi��es, preench�-lo com os 10 primeiros n�meros �mpares e escrev�-lo.
*/

void main(void)
{
    int vet[10];
    int i, cont;

    cont = 1;
    for (i=0; i < 10; i++)
    {
        vet[i] = cont;
        printf("%i ", vet[i]);
        cont += 2;

    }
}
