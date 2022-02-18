// Exercicios: Numeros Primos
/*
Especificaçoes e Analise do problema

Dados de entrada
n (inteiro) : numero introduzido pelo utilizador

RESULTADOS PRETENDIDOS
Saber se o numero é primo ou nao (texto)

PROCESSAMENTO REQUERIDO
contador <- 1
ESTRATEGIA
Obtem um numero inteiro positivo do utilizador
Faz n/contador


PSEUDOCODIGO

INICIO primo
    FAZER
        OBTEM (n)
        SE (n>0)ENTAO
        contador <- 0
            ENQUANTO(contador<=n)
                contador <- contador + 1
                SE (n % contador == 0)
                    primo <- primo + 1
                FIM SE
            FIM ENQUANTO
            SE (primo <- 2)
                MOSTRA ("O numero é primo")
            SENAO
                MOSTRA ("O numero nao é primo")
            FIM SE
        FIM SE
    ENQUANTO (n>0)
FIM primo

*/
//  CODIGO EM C
/*
#include <stdio.h>

/// O UTILIZADOR ESCOLHE O NUMERO PARA O QUAL QUER SABER SE É PRIMO OU NAO ///

void main()
{
    int n, contador, primo;
    do
    {
        printf("Numero: ");
        scanf("%d",&n);
        if (n>0)
        {
            contador = 1;
            primo = 0;
            do
            {
                if(n % contador == 0)
                {
                    primo++;
                }
                contador ++;
            }while(contador <= n);
            if(primo == 2)
            {
                printf("O numero e primo\n");
            }
            else
            {
                printf("O numero nao e primo\n");
            }
        }
    }while (n>0);
}
*/

/// NESTA VERSAO O PROGRAMA MOSTRA TODOS OS NUMEROS PRIMOS ATÉ INFINITO ///

void main()
{
    int n=0, contador, primo;
    do
    {
        n++;
        contador = 1;
        primo = 0;
        do
        {
            if(n % contador == 0)
            {
                primo++;
            }
            contador++;
        }while(contador <= n);
        if (primo == 2)
        {
            printf("%d\n",n);
        }
    }while(n>0);
}
