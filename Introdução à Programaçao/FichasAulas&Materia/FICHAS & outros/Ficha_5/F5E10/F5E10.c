#include <stdio.h>

int cubo(int);

void main()
{
    int n;
    printf("O cubo do numero: ");
    scanf("%d",&n);
    printf("Vai ser %d\n", cubo(n));
    printf("Numero compreendido de 100 a 999 escolhido foi de: %d\n",nintervalo());

}

int cubo(int n)
{
    int ncubo = n*n*n;
    return(ncubo);
}

int nintervalo()
{
    int n1;
    while(n1<100 || n1>999)
    {
        fflush(stdin);
        printf("Numero: ");
        scanf("%d",&n1);
    }
    return n1;
}
