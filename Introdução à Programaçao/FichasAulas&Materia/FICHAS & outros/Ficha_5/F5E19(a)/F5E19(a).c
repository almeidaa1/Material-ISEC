/*
Especificaçoes e analise da funçao

DADOS DE ENTRADA
n (inteiro) : numero inteiro introduzido pelo utilizador

RESULTADOS PRETENDIDOS
fat (inteiro) : o fatorial do numero introduzido

PROCESSAMENTO REQUERIDO
fat <- 1
fat <- fat * n

ESTRATEGIA
Obter n
Enquanto o n for maior ou igual a 1
Calcular o fatorial e incrementar o n

PSEUDOCODIGO
INICIOFUNÇAO fatorial
    RECEBE(n)
    fat <- 1
    Enquanto (n>=1) FAZER
        fat <- fat * n
        n <- n - 1
    FIM ENQUANTO
DEVOLVE(fat)
FIMFUNÇAO fatorial
*/
#include <stdio.h>

int fatorial(int);
void main()
{
    int n;
    printf("Fatorial de ");
    scanf("%d",&n);
    printf("\n%d! = %d\n", n, fatorial(n));
}

int fatorial(int n)
{
    int fat=1;
    while(n>=1)
    {
        fat *= n;
        n--;
    }
    return fat;
}
