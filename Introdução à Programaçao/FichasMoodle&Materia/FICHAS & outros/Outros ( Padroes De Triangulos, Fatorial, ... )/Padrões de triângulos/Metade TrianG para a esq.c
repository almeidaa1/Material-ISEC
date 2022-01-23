#include <stdio.h>

int main()
{
    int numlinhas,linha,esp,coluna;
    printf("Numero de Linhas: ");
    scanf("%d",&numlinhas);

    for(linha=1;linha<=numlinhas;linha++) //ciclo para percorrer as linhas
    {
        for(esp=1;esp<=numlinhas-linha;esp++) //ciclo para os espaços
        {
            printf(" ");
        }
        for(coluna=1;coluna<=linha;coluna++) //ciclo para as colunas
        {
            printf("*");
        }

    printf("\n");
    }
}
