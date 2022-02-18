#include <stdio.h>

int main()
{
    int numlinhas,numcolunas;
    printf("Numero de linhas: ");
    scanf("%d",&numlinhas);
    printf("Numero de colunas: ");
    scanf("%d",&numcolunas);
    printf("\n");
    int colunas,linhas;
    for(linhas=1;linhas<=numlinhas;linhas++)
    {
        for(colunas=1; colunas<=numcolunas; colunas++ )
            printf("*");
            printf("\n");
    }

}

