/*
Especificaçoes e Analise do Problema

-DADOS DE ENTRADA-
kminicio (real) : marcaçao de kilometros no inicio do dia
kmfim (real) : marcaçao de kilometros no final do dia
lgastos (real) : numero de litros de combustivel gastos
dinheiro (real) : valor total em € recebido dos passageiros

-RESULTADOS PRETENDIDOS-
mconsumo (real) : media do consumo de km/l
lucro (real) : lucro diario

-PROCESSAMENTO REQUERIDO-
PREÇO <- 1.3
mconsumo <- ((kfim-kinicio)/lgastos)
lucro <- dinheiro - ( mconsumo*PREÇO )

-ESTRATEGIA-
Obtem kminicio, kmfim, lgastos, dinheiro
Calcula mconsumo e o lucro
Mostra mconsumo e o lucro

-PSEUDOCODIGO-

INICIO programa
PREÇO <- 1.3
OBTEM( kminicio, kmfim, lgastos, dinheiro )
mconsumo <- ((kfim-kinicio)/lgastos)
lucro <- dinheiro - ( mconsumo*PREÇO )
MOSTRA(mconsumo, lucro)
FIM programa
*/

#include <stdio.h>

void main()
{
    const PRECO = 1.3;
    float kminicio, kmfim, lgastos, dinheiro, mconsumo,lucro;
    printf("Marcacao do kilometros ao inicio do dia: ");
    scanf("%f",&kminicio);
    printf("Marcacao do kilometros no final do dia: ");
    scanf("%f",&kmfim);
    printf("Numero de litros de combustivel gastos: ");
    scanf("%f",&lgastos);
    printf("Valor total em (euros) recebido dos passageiros: ");
    scanf("%f",&dinheiro);
    mconsumo = ((kmfim-kminicio)/lgastos);
    lucro = dinheiro - (mconsumo*PRECO);
    printf("A media de consumo e de %.2f (km/l) || Lucro Diário : %.2f ",mconsumo, lucro);
}
