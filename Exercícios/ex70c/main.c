#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vector[4],i,icontpar=0,isoma=0;

for(i = 0;i < 4; i++)
{
	printf("Digite a %d posicao: ",i);
	scanf("%d",&vector[i]);
	if((vector[i] % 2)== 0)
	{
		icontpar++;
		isoma += vector[i];
	}
	else
        continue;
}
    printf("O vetor tem  %i valores pares \n", icontpar);
    printf("A soma de todos os valores pares deste vetor e:   %i", isoma);
    return 0;
}
