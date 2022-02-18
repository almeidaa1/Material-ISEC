#include <stdio.h>

int main()
{
    int numlinhas,col,linh;

    printf("Numero de Linhas: ");
    scanf("%d",&numlinhas);

    for(linh=1;linh<=numlinhas;linh++)
    {
        for(col=1;col<=linh;col++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
