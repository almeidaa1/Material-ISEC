/*
-DADOS DE ENTRADA-
n (real) : sequencia de números reais em ordem crescente

-RESULTADOS PRETENDIDOS-
soma (real) : soma de todos os numeros crescentes introduzidos
media (real) : media de todos os numeros crescentes introduzidos

-PROCESSAMENTO REQUERIDO-
Obter os numeros da sequencia, ir somando-os e contando-os, à medida que são obtidos, enquanto o ultimo numero introduzido for
maior que o anterior.
Calcular a media dos numeros introduzidos na ordem correta
Mostrar ( soma, media )

-PSEUDO CÓDIGO-
INICIO programa
OBTEM (num)
soma <- num
n <- 1
FAZER
    ult <- num
    OBTEM (num)
    SE (num > ult) ENTAO
        Soma <- soma + num
        n <- n + 1
    FIM SE
EQUANTO(num>ult)
    media <- soma / n
MOSTRA ( soma, media )
FIM programa
*/

#include <stdio.h>
#include <stdlib.h>
void main()
/*acabar em casa*/
