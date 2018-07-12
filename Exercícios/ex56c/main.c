#include <stdio.h>
#include <stdlib.h>
#define TAM 10
char vetortabela[10][20];
int i;
char* criaVetor();
int main()
{
       char vetor[10];
    criaVetor(vetor);
    printf("%s", vetor);
}

/*char TxTIntoSTRINGARRAY (char vetortabela[TAM][20]);
{
    FILE *tabela; // Indica que trata-se de um arquivo
    tabela = fopen(pasta, "r"); // atribui a "tabela" o endereço e o que fazer "r = read"
    FILE *jogos = fopen("C:\\Users\\Max\\Desktop\\jogos.txt", "r");

     for (i = 0; i < TAM; i++) // varrendo a tabela e escrevendo as linhas no vetor
    {
        fgets(vetortabela[i], 20, tabela);
    }
    return vetortabela;
}*/
char ** sub_str = malloc(10 * sizeof(char*));
for (int i =0 ; i < 10; ++i)
    sub_str[i] = malloc(20 * sizeof(char));
/* Fill the sub_str strings */
return sub_str;
