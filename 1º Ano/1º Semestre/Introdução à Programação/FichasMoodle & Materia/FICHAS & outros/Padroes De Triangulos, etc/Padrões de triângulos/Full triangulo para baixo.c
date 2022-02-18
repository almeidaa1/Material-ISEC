#include <stdio.h>

int main()
{
    int numlinhas;
    printf("Numero de linhas: ");
    scanf("%d",&numlinhas);

    int linhas,colunas,esp;
    for (linhas=1;linhas<=numlinhas;linhas++)
    {
        for(esp=1;esp<linhas;esp++)
        {
            printf(" ");
        }
        for(colunas=numlinhas;colunas>=linhas;colunas--)
        {
            printf("* ");
        }
    printf("\n");
    }
}
