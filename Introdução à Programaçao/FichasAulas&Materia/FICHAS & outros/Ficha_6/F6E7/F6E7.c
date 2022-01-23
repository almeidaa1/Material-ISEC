/**********************************************************************************************************
                                                ALINEA ( a )
***********************************************************************************************************/

/// Analise e processamento da Funcao ///

/*
-DADOS DE ENTRADA-
v (inteiro) : array de inteiros
tam (inteiro) : tamanho do array

-RESULTADOS PRETENDIDOS-
pos (inteiro) : posiçao (indice no array) do maior dos elementos do array

-PROCESSAMENTO REQUERIDO-
Receber (v, tam)
Encontrar o maior elemento do array e guardar a posicao
Devolver (pos)

-PSEUDOCODIGO-

INICIOFUNCAO vetor
RECEBE (v, tam)
    maior <- 1º elemento do vetor
    pos <- 0
    i <- 2ª posicao dentro do vetor
    ENQUANTO (i < tam) FAZER
        SE ( maior <= elemento do vetor da posicao i )
            maior <- elemento do vetor da posicao i
            pos <- i
        FIM SE
        i <- proxima posicao dentro do vetor
    FIM ENQUANTO
FIMFUNCAO vetor
*/

/// CODIGO EM C ///
int obter_pos( int* vetor,  int tam )
{
    int valor_maximo = vetor[ 0 ], pos = 0;
    for ( int i = 1; i < tam_vetor; i++ )
    {
        if ( vetor[ i ] > valor_maximo )
        {
            valor_maximo = vetor[ i ];
            pos = i;
        }
    }
    return pos;
}

/**********************************************************************************************************
                                                ALINEA ( b )
***********************************************************************************************************/

-DADOS DE ENTRADA-
v (inteiro) – array de inteiros cujos elementos se quer deslocar
tam (inteiro) – tamanho do array

-RESULTADOS PRETENDIDOS-
v (inteiro) – vetor com o conteúdo deslocado UMA posição para a direita

-PROCESSAMENTO REQUERIDO-
v (inteiro) – vetor com o conteúdo deslocado UMA posição para a direita

-PSEUDOCODIGO-

INICIO FUNÇÃO Roda
RECEBE (v, tam)
	aux <- elemento de v da posição (tam-1)
	i <- tam-2
	ENQUANTO (i >= 0) FAZER
		elemento de v da posição (i+1) <- elemento de v da posição i
		i <- i - 1
	FIM ENQUANTO
	elemento de v da posição 0 <- aux
FIM FUNÇÃO Roda

/**********************************************************************************************************
                                                ALINEA ( c )
***********************************************************************************************************/

void main ()
{
	int i, v[] = {1, 2, 5, 4, 3};
}
