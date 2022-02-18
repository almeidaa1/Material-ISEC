/// Especificaçoes do programa ///

/*
Constante
    N (inteiro) : Tamanho do array de inteiros;
                #define N 5  <- define N = 5 como constante o programa todo

DADOS DE ENTRADA
    n1, n2, ..., nn (inteiro) : valor dos elementos do vetor

RESULTADOS PRETENDIDOS
    media (real) : Media de N elementos do vetor

PROCESSAMENTO REQUERIDO
    Obter N valores e coloca-los no vetor
    Calcular e mostrar a media dos elementos do vetor

PSEUDOCODIGO
    INICIO programa
    i <- 0
    soma <- 0
    ENQUANTO ( i < N ) FAZER
        OBTEM (v[i])
        soma <- soma + v[i]
        i <- i + 1
    FIM ENQUANTO
    media <- soma / N
    MOSTRA (media)
FIM programa
*/

/// CODIGO EM C com ( WHILE )//

/*
#include <stdio.h>
#define N 5

void main()
{
    int i = 0, soma = 0, v[N];
    float media;
    while(i < N)
    {
        printf("Valor da posicao %d do vetor: ", i);
        scanf("%d",&v[i]);
        soma += v[i];
        i++;
    }
    media = (float)soma / (float)N;
    printf("Media: %.2f", media);

}
*/

/// CODIGO EM C com (FOR)

#include <stdio.h>
#define N 5

void main()
{
    int i, soma = 0, v[N];
    float media;
    for (i = 0; i < N; i++)
    {
        printf("Valor da posicao %d do vetor: ", i);
        scanf("%d",&v[i]);
        soma += v[i];
    }
    media = (float)soma / (float)N;
    printf("Media: %.2f", media);
}

