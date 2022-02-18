/*Especificaçoes e Analise Do Problema

-DADOS DE ENTRADA-
numlinhas (inteiro) : numero de linhas que o certo triangulo vai ter

-RESULTADOS PRETENDIDOS-
Triangulo invertido com n linhas (numlinhas)

-PROCESSAMENTO REQUERIDO-

-ESTRATEGIA-
Enquanto o numero de linhas for maior que 1 e menor que 9 fazer
Inicia com primeira linha, ver quantos espaçamentos sao necessarios, ou se sao necessario sequer.
Mostra os numero  de 1 até o numero de linhas e depois decrementa até 1 novamente.
Quebra a primeira linha, e vai para segunda.
Ver o espaçamento necessario para que o resultado pretendido tenha a forma de um triangulo
Mostra os numeros de 1 até numero de linhas - 1 (numlinhas-1) e depois decrementa até 1 novamente
Quebra de linha, e vai para a terceira
E assim sucessivamente, incrementa o espaçamento, escreve os numero de 1 até numlinhas, numlinhas-1, numlinhas-2,..., quando la chega
decrementa ate 1 e quebra de linha.

*/


#include <stdio.h>
int triangulo(int);

void main()
{
    int numlinhas,r=0;
    while(numlinhas<=1 || numlinhas>9)
    {
        printf("Numero de linhas: ");
        scanf("%d",&numlinhas);
    }
    //while(r==0)
        {
            triangulo(numlinhas);
        }
}

int triangulo(int numlinhas)
{
    int coluna,linha,esp,n;
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
