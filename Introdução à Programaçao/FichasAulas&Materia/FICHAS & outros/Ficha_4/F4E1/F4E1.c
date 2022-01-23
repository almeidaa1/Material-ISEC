/*
Especificaçoes e analise do problema

DADOS DE ENTRADA
n (inteiro) : numero inteiro positivo introduzido pelo utilizador

RESULTADOS PRETENDIDOS
Os 25 primeiros multiplos de n, 5 em cada linha

PROCESSAMENTO REQUERIDO
nmult <- 1
multiplicador <- 1
multiplo <- n * multiplicador
linha <- 1

ESTRATEGIA
Obtem um n
Enquanto a linha for menor ou igual a 5 fazemos que
    Enquanto o nmult for menor ou igual 5 fazer o procedimento abaixo
        Calcular o multiplo
        Mostra o multiplo
        incrementar o multiplicador
        increntar o nmult
    Quando for nmultt for maior que 5, saimos do ciclo, quebramos a linha, e incrementamos a linha, nmult volta a 1
Quando a linha for maior que 5, saimos do ciclo e mostra os 25 primeiros multiplos, no qual 5 em cada linha

PSEUDOCODIGO

INICIO programa
    OBTEM (n)
    nmult <- 0
    multiplicador <- 1
    linha<-0
    ENQUANTO (linha<=5) FAZER
        linha <- linha + 1
        ENQUANTO (nmult <= 5) FAZER
           multiplo <- n * multiplicador
           MOSTRA(multiplo)
           multiplicador <- multplicador + 1
           nmult <- nmult + 1
        FIM ENQUANTO
    MOSTRA("\n")
    FIM ENQUANTO
FIM programa

*/

// CODIGO EM C //

#include <stdio.h>

void main()
{
    int n, linha=1, nmult=1, multiplicador=1,multiplo;
    printf("Multiplos de ");
    scanf("%d",&n);
    printf("\n");
    while(linha<=5)
    {

        while(nmult<=5)
        {
            multiplo = n * multiplicador;
            printf("%d ",multiplo);
            multiplicador++;
            nmult++;
        }
    printf("\n");
    linha++;
    nmult=1;
    }
}





