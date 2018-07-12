#include <stdio.h>
#include <stdlib.h>

int main()
{

     int cont2=0,vet[10], i;
     printf("Preencha o vetor..: ");
     for (i = 0; i < 10; i++)
     {
         scanf("%i", &vet);
     }
     for(i = 1;i <= 20; i++)
     {
       if (i % 2 != 0)
       {
         vet[cont2]= i;
         printf("%i", vet[cont2]);
         cont2++;
       }
     }
    return 0;
}
