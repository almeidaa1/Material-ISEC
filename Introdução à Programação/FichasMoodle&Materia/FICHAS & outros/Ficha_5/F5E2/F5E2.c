/*

Especifica�oes e Analise do Problema

-DADOS DE ENTRADA-
inf, sup (inteiro) : Limite Superior e Superior
n (inteiro) : n� que se pretende testar

-RESULTADOS PRETENDIDOS-
estado (inteiro) - 1 se inf <= n <= sup
                 - 0 se n�o

-PROCESSAMENTO REQUERIDO-
Receber (inf, sup, n)
Verificar es est� dentro dos limites
Devlolver (1 se sim, 0 caso contrario)

-PSEUDO CODIGO-
INICIOFUNCAO verifica
RECEBE(n, inf, sup)
    estado <- 0
    SE (n <= sup E n>=inf) ENTAO
        estado <- 1
    FIM SE
DEVOLVE estado
FIMFUNCAO verifica

*/
