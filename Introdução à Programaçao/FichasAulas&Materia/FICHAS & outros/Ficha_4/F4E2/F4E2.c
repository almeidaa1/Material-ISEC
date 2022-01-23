/*

// 1ª Versao

Especificaçoes e analise do problema

DADOS DE ENTRADA
ntrab (inteiro) : numero de empregrados a ser considerado
salario, ... até salariontrab (float) : salario desses empregados

RESULTADOS PRETENDIDOS
media (float) : Salario medio da empresa

PROCESSAMENTO REQUERIDO
totalsal <- 0
media <- (salario1 + ... + salariotrab) / ntrab

ESTRATEGIA
Obter o numero de empregados a ser considerado (ntrab)
Enquanto o numero de empregados for maior ou igual a 1 (ntrab >= 1)
    Obter os salarios do numero de empregados (ntrab salarios)
    Decrementa o numero de empregados (ntrab <- ntrab - 1)
Sai do ciclo
Calcula a media
Mostra a media

PSEUDOCODIGO

INCIO programa
    totalsal <-0
    OBTEM (ntrab)
    ENQUANTO (ntrab >=1) FAZER
        OBTEM(salario)
        ntrab <- ntrab - 1
        totalsal <- totalsal + salario
    FIM ENQUANTO
    media <- totalsal/ntrab
    MOSTRA(media)
FIM programa
*/

// CODIGO EM C //

#include <stdio.h>

void main()
{
    int ntrab;
    float totalsal=0, media, salario,i=1;

    printf("Numero de Trabalhadores: ");
    scanf("%d",&ntrab);
    while(i<=ntrab)
    {
        printf("Salario: ");
        scanf("%f",&salario);
        i++;
        totalsal += salario;
    }
    media = totalsal / (float)ntrab;
    printf("Salario Medio da Empresa: %.2f dineros \n", media);
}
