#include <stdio.h>

int main()
{
    int numlinhas;
    printf("Numero de linhas: ");
    scanf("%d",&numlinhas);

    int linha,coluna,esp,n=1;
    for(linha=1;linha<=numlinhas;linha++)
    {
        n=1;
        for(esp=1;esp<=numlinhas-linha;esp++)
        {
            printf(" ");
        }
        for(coluna=1;coluna<=linha;coluna++)
        {
            printf("%d",n);
            n++;
        }
        n=linha-1;
        for(coluna=2;coluna<=linha;coluna++)
        {
            printf("%d",n);
            n--;
        }
    printf("\n");
    }
}

