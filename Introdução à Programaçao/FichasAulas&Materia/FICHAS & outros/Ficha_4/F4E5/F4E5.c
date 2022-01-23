    /// Especificaçoes e Analise do Problema ///
/*

DADOS DE ENTRADA
m (inteiro) : limite inferior
n (inteiro) : limite superior

RESULTADOS PRETENDIDOS
mult5 (inteiros) : multiplos de 5 que nao sao simultaneamente multiplos de 3

PROCESSAMENTO REQUERIDO
mult5 <- m % 5
m <- m + 1
ESTRATEGIA

Obtem um limite inferior (m) e um limite superior (n), enquanto m > n OU m<0
Enquanto m menor que n fazer procedimento que esta nos tracinhos abaixo
-Calcular mult5 (mult5 <- m % 5)
-Se mult5 for igual a 0 E m resto 3 diferente de 0 entao mostra esse m
-Incrementa o m

PSEUDOCODIGO

INICIO programa
    FAZER
        OBTEM (m,n)
    ENQUANTO (m > n OU m < 0)
    ENQUANTO (m<n) FAZER
        mult5 <- m % 5
        SE (mult5 <- 0 E m % 3 != 0)
            MOSTRA (m)
        FIM SE
        m <- m + 1
    FIM ENQUANTO
FIM PROGRAMA
*/

/// CODIGO EM C ///

#include <stdio.h>

void main()
{
    int m, n, mult5;
    do
    {
        printf("Limite inferior: ");
        scanf("%d",&m);
        printf("Limite superior: ");
        scanf("%d",&n);
        printf("\n");
    }while(m > n || m < 0);
    while(m<=n)
    {
        mult5 = m % 5;
        if (mult5 == 0 && m % 3 != 0)
        {
            printf("| %d |\n",m);
        }
        m++;
    }
}

