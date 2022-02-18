#include <stdio.h>

int main()
{
    int numlinhas;
    printf("Numero de linhas: ");
    scanf("%d",&numlinhas);

    int colunas, linha, esp;
    for(linha=1;linha<=numlinhas;linha++)
    {
        for(esp=numlinhas-linha;esp<=1;esp++)
        {
            printf(" ");
        }
        for (colunas=numlinhas;colunas>=linha;colunas--)
        {
            printf("*");
        }
        printf("\n");
    }

}
