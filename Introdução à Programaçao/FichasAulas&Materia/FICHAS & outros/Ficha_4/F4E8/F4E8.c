/*
Especificaçoes e analise do problema

DADOS DE ENTRADA
n (inteiro) : numero introduzido inteiro positivo introduzido pelo utilizador

RESULTADOS PRETENDIDOS
Dizer se n é um numero abundante ou reduzido ou perfeito

PROCESSAMENTO REQUERIDO
divisor <- 2
cat <- 0 // cat -> categoria do numero inteiro //
resultado <- n/divisor


ESTRATEGIA
Obter o n
Enquanto o divisor for menor ou igual que o numero fazer o procedimento abaixo:
    Incrementamos o divisor
    Se n resto divisor for igual a 0 entao cat <- cat + resultado e o divisor incrementa
    Senao (se o resto do divisor nao for igual a 0) incrementa se o divisor
Saimos do ciclo
Se o cat for igual ao n entao mostrar ("Numero perfeito")
Senao, se o cat for menor que o n entao mostrar ("Numero abundante")
Senao mostrar ("Numero Reduzido")

PSEUDOCODIGO

INICIO programa
    OBTEM (n)
    divisor <- 2
    cat <- 0
    ENQUANTO (divisor<=n) FAZER
        SE (n%divisor == 0)
            resultado <- n/divisor
            cat <- cat + resultado
            divisor <- divisor + 1
        SENAO
            divisor <- divisor + 1
        FIM SE
    FIM ENQUANTO
    SE (cat==n)
        MOSTRA("E um numero perfeito")
    SENAO SE (cat < n)
        MOSTRA ("E um numero abundante")
    SENAO
        MOSTRA ("E um numero reduzido")
    FIM SE
FIM PROGRAMA

*/

// CODIGO EM C //

#include <stdio.h>

void main()
{
    int n, cat, divisor,resultado;
    printf("N: ");
    scanf("%d",&n);
    divisor = 2;
    cat = 0;
    while(divisor <= n)
    {
        if (n%divisor == 0)
        {
            resultado = n/divisor;
            cat += resultado;
            divisor++;
        }
        else
        {
            divisor++;
        }
    }
    if (cat == n)
    {
        printf("\nE um numero perfeito\n");
    }
    else if (cat < n)
    {
        printf("\nE um numero abundante\n");
    }
    else
    {
        printf("\nE um numero reduzido\n");
    }
}
