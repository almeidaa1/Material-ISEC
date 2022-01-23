#include <stdio.h>

main()
{
    int numlinhas;
    printf("Numero de linhas: ");
    scanf("%d",&numlinhas);

    int coluna,linha,esp,n;
    for(linha=1;linha<=numlinhas;linha++)
    {
        for(esp=1;esp<linha;esp++)
        {
            printf("  ");
        }
        for(coluna=linha;coluna<=numlinhas;coluna++)
        {
            printf("* ");
        }
        for(coluna=linha;coluna<numlinhas;coluna++)
        {
            printf("* ");
        }
    printf("\n");
    }
}
