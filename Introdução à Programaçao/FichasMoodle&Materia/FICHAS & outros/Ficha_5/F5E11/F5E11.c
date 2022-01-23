#include <stdio.h>

int xmaior(int);

void main()
{
    int tamseq;
    printf("Tamanho da sequencia: ");
    scanf("%d",&tamseq);
    printf("Apareceu %d vez na sequencia\n",xmaior(tamseq));
}

int xmaior(int tamseq)
{
    int n,contador,i=1,maior;
    while(i<=tamseq)
    {
        printf("N: ");
        scanf("%d",&n);
        i++;
        if(n>maior && contador > 0)
        {
            contador = 0;
        }
        if(n>=maior)
        {
            maior = n;
            contador ++;
        }
    }
    printf("\nO maior numero e %d\n",maior);
    return contador;


}
