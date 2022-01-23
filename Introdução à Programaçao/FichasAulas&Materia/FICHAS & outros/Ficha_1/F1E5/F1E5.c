/*
Especificaçoes e analise do problema8*

-DADOS DE ENTRADA-
id (inteiro) : numero de identificaçao do vendedor
numcarros (inteiro) : numero de carros vendidos pelo vendedor
valvendas (real) : valor total das suas vendas (em dinheiro)
salario (real) : salario desse mesmo vendedor
comissao (real) : comissao fixa por carro vendido

-RESULTADOS PRETENDIDOS-
salariototal (real) : salario total mensal desse
id (inteiro) : numero de identificaçao do vendedor

-PROCESSAMENTO REQUERIDO-
salariototal <- salario + (COMISSAO*numcarros) + (valvendas*0.05)

-ESTRATEGIA-
Obtem id, numcarros, valvendas, salario, comissao
Calcula salariototal
Mostra id e o salariototal

-PSEUDOCODIGO-
OBTEM (id, numcarros, valvendas, salario, COMISSAO)
salariototal <- salario + (comissao*numcarros) + (valvendas*0.05)
MOSTRA(id, salariototal)
*/

#include <stdio.h>

void main()
{
    int id,numcarros;
    float valvendas,salario,COMISSAO,salariototal;

    printf("ID Vendedor: ");
    scanf("%d",&id);

    printf("\nNumero de carros vendidos pelo vendedor este mes: ");
    scanf("%d",&numcarros);

    printf("\nValor total das suas vendas: ");
    scanf("%f",&valvendas);

    printf("\nSalario sem comissoes e taxas: ");
    scanf("%f",&salario);

    printf("\nComissao por carro vendido: ");
    scanf("%f",&COMISSAO);

    salariototal = salario + (COMISSAO*numcarros) + (valvendas*0.05);
    printf("\nO Salario Final do Vendedor vai ser de: %.2f || ID: %d",salariototal,id);

    printf("\n");

}
