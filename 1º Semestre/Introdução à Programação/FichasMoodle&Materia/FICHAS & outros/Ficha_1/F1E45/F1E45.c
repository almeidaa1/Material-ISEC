/*
!! Exercicio 45 (a) !!

Especificaçoes e Analise da funçao

-DADOS DE ENTRADA-
n (inteiro) : valor inteiro positivo

-RESULTADOS PRETENDIDOS-
ndivisores (inteiro) : numero de divisores do n

-CONHECIMENTO REQUERIDO-
i <- 1
ndivi <- 0
Recebe o n
Enquanto i <= n fazer
    i <- i + 1
    ndivi <- ndivi + 1
Sai do ciclo
Devolve (ndivi)

-PSEUDO CODIGO-
INICIOFUNCAO Div
RECEBE (n)
ENQUANTO(n<=i)FAZER
    SE (n%i == 0 ) ENTAO
            i <- i + 1
            ndivi <- ndivi + 1
    FIM SE
FIM ENQUANTO
DEVOLVE (ndivi)

*/
/*
!! Exercicio 45 (a funçao principal) !!

Especificaçoes e Analise do Problema

-DADOS DE ENTRADA-
n (inteiro) : numero inteiro introduzido pelo utilizador

-RESULTADOS PRETENDIDOS-
ndivi (inteiro) : numero de divisores obtido atraves da funçao da alinea (a)

-CONHECIMENTO REQUERIDO-
Obtem(n)
ndivi <- ndivi (calculada atraves da funçao da alinea)
Mostra (ndivi)

-PSEUDO CODIGO-
INICIOFUNCAO Div
    RECEBE(n)
    i <- 1
    ndivi <- 0
    ENQUANTO (i<=n) FAZER
        SE (n%i == 0 ) ENTAO
            i <- i + 1
            ndivi <- ndivi + 1
        SENAO
            i <- i + 1
        FIM SE
    FIM ENQUANTO
FIMFUNCAO Div

INICIO programa
OBTEM(n)
MOSTRA(CHAMARFUNCAO Div)
FIM programa
*/

#include <stdio.h>

int Div(int n);

void main ()
{
    int n;
    printf("Um numero: ");
    scanf("%d",&n);
    printf("O numero de divisores que %d tem e de %d",n, Div(n));


}

int Div(int n){
int i = 1, ndivi = 0;
while (i<=n){
    if (n%i == 0){
    i++;
        ndivi++;
    } else {
        i++;
    }

}
return ndivi;
}
