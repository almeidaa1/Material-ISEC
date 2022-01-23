#include <stdio.h>

int main()
{
    int numlinhas,linha,coluna,esp;
    printf("Numero de linhas: ");
    scanf("%d",&numlinhas);

    for(linha=1;linha<=numlinhas;linha++)
    {
        for(esp=1;esp<=numlinhas-linha;esp++)
        {
            printf(" ");
        }

        for(coluna=1;coluna<=linha;coluna++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
