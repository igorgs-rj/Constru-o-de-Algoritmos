#include <stdio.h>
#include <stdlib.h>

void main()
{
	char palavra1[6], palavra2[6];
	int i;
	scanf("%s", palavra1);
	scanf("%s", palavra2);
	if (strcmp(palavra1, palavra2)==0)
        printf("Sao palindromos!!");
	/*for (i=0;i<5;i++)
    {
		if (palavra1[i]!=palavra2[4-i])
		{
			printf("As palavras %s e %s nao sao palindromos. \n", palavra1, palavra2);
			break;
		}
        else if (palavra1[i]==palavra2[4-i])
            printf("As palavras %s e %s sao palindromos.", palavra1, palavra2);
            break;
    } */
	return 0;
}
