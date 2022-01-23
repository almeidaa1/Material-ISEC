/*
Especificaçoes e Analise da funçao

// 1ª Parte //

DADOS DE ENTRADA
n (inteiro) : numero inteiro positivo ao qual queremos saber o numero de divisores total

RESULTADOS PRETENDIDOS
divn (inteiro) : numero de divisores do numero (n) introduzido pelo utilizador

PROCESSAMENTO REQUERIDO
contador <- 0
divisor <- 1
resultado <- n/divisor

ESTRATEGIA

Recebe um numero interio positivo
Se o numero resto 1 for igual a 0,entao incremantamos o contador e o divisor.
Senao incrementos somente o divisor
E repetimos o processo enquanto o divisor for menor ou igual ao numero
No final devolvemos o contador que vai ser o numero total de divisores desse tal numero

PSEUDOCODIGO
INICIOFUNÇAO ndiv
RECEBE(n)
    divisor <- 1
    contador <- 0
    ENQUANTO (divisor<=n) FAZER
        SE (n%divisor == 0) FAZER
            divisor <- divisor + 1
            contador <- contador + 1
        SENAO
            divisor <- divisor + 1
        FIM SE
    FIM ENQUANTO
DEVOLVE(contador)
FIMFUNÇAO ndiv
*/
/*

Especificaçoes e analise do problema

// 2ª PARTE //

DADOS DE ENTRADA
n1, n2, n3 .. (inteiros) : Sequencia numeros inteiros positivos exceto 0 introduzidos pelo utilizador

RESULTADOS PRETENDIDOS

Sempre que nessa sequencia for introduzido um numero primo, o programa diz "Numero introduzido é primo"

PROCESSAMENTO REQUERIDO
-----------------------

ESTRATEGIA
Enquanto n>0 fazer procedimento abaixo:
Obter um n
Se o numero de divisores (chamar a funçao ndiv) desse n for igual a 2 entao escrever o numero é primo.

PSEUDOCODIGO
INICIO programa
    OBTEM(n)
    ENQUANTO (n>0) FAZER
        SE (CHAMARFUNÇAO ndiv == 2)
            MOSTRAR("O Numero introduzido e primo")
        FIM SE
    FIM ENQUANTO
FIM PROGRAMA
*/
#include <stdio.h>

int ndiv(int);
void main()
{
    int n=1;
    while(n>0)
    {
        printf("n: ");
        scanf("%d",&n);
        if(ndiv(n) == 2)
        {
            printf("O numero introduzido e primo\n");
        }
    }
}

int ndiv(int n)
{
    int contador,divisor;
    contador = 0;
    divisor = 1;
    while(divisor<=n)
    {
        if(n%divisor == 0)
        {
            contador++;
            divisor++;
        }
        else
        {
            divisor++;
        }
    }
return contador;
}
