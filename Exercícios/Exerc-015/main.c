#include <stdio.h>

/*Uma revendedora de carros usados paga
a seus vendedores um sal�rio fixo por m�s,
mais uma comiss�o, tamb�m fixa, para cada
carro vendido e mais 5% do valor das vendas
efetuadas por eles. Ler o n�mero de carros
vendidos por um vendedor, o valor total de
suas vendas, o sal�rio fixo e o valor que
ele recebe por carro. Em seguida, calcular
e escrever o sal�rio mensal do vendedor.
*/

void main(void)
{
    int carrosV;
    float totV, salF, valC, salM;

    printf("\nDigite o numero de carros vendidos por um vendedor: ");
        scanf("%i", &carrosV);
    printf("\nDigite o valor total de suas vendas: ");
        scanf("%f", &totV);
    printf("\nDigite o salario fixo: ");
        scanf("%f", &salF);
    printf("\nDigite o valor que ele recebe por carro: ");
        scanf("%f", &valC);

    salM = salF + (valC * carrosV) + (totV * 0.05);
    printf("\nO salario mensal do vendedor e de R$%.2f", salM);
}
