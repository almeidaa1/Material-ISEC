#include <stdio.h>

int main()
{
    int numlinhas;
    printf("Numero de linhas: ");
    scanf("%d",&numlinhas);

    int linha,coluna,esp,n;
    for(linha=1;linha<=numlinhas;linha++)
    {
        for(esp=1;esp<linha;esp++)
        {
            printf("  ");
        }
        n=0;
        for(coluna=numlinhas;coluna>=linha;coluna--)
        {
            n++;
            printf("%d ",n);
        }
        for(coluna=numlinhas;coluna>linha;coluna--)
        {
            n--;
            printf("%d ",n);
        }
    printf("\n");
    }
}
