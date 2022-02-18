#include <stdio.h>

int maior(int);

void main()
{
    int tamseq;
    printf("Tamanho sequencia: ");
    scanf("%d",&tamseq);
    printf("|| Apareceu %d vezes na sequencia ||\n\n",maior(tamseq));

}

int maior(int tamseq)
{
    int n,maior=0,contador;
    while(tamseq>=1)
    {
        printf("N: ");
        scanf("%d",&n);
        tamseq--;
        if(n>maior)
        {
            maior=n;
            contador=1;
        }
        else if(n==maior)
        {
            contador++;
        }
    }
    printf("\n|| Maior numero: %d ||\n",maior); //NAO PEDIA NA PERGUNTA (ADICIONAL)
    return contador;
}
