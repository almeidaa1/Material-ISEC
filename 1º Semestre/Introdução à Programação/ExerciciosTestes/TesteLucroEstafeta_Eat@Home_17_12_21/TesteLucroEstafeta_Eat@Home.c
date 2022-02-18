/*
(a)

Especificaçoes e Analise do Da funçao

DADOS DE ENTRADA
custo (real) : custo do serviço em €
distancia (real) : distancia percorrida em Kms
gorjeta (real) : gorjeta recebida

RESULTADOS PRETENDIDOS
lucro (real) : lucro do estafeta

PROCESSAMENTO REQUERIDO
lucro <- (custo*0.1) + (0.1 * km) + gorjeta

ESTRATEGIA
Recebe(custo, distancia, gorjeta)
Calcula lucro
Devolve licro

PSEUDO CODIGO
INICIOFUNCAO lucroest
    RECEBE(custo, distancia, gorjeta)
    lucro <- (custo*0.1) + (0.1 * km) + gorjeta
    DEVOLVE(lucro)
FIMFUNCAO lucroest
*/

// CODIGO EM C //

#include <stdio.h>

float lucroest(float custo, float distancia, float gorjeta)
{
    float lucro;
    lucro = (custo * 0.1) + (0.1 * distancia) + gorjeta;
    return lucro;
}

/*
(b)

Especificaçoes e analise do problema

DADOS DE ENTRADA
custo (real) : custo do serviço (>=0)
distancia (real) : distancia percorrido pelo estafeta em Kms (>=0 E <=20)
gorjeta (real) : gorjeta recebida (>=0)

RESULTADOS PRETENDIDOS
lparcial (real) : lucro parcial relativo a cada entrega, obdito atraves da funçao
ldiario (real) : lucro diario, ou seja a soma de todos os lucros parciais
servico (inteiro) : numero total de serviços realizados
menor (real) : lucro do serviço menor lucrativo indentificando o seu numero

PROCESSAMENTO REQUERIDO
servico<-1
ldiario <- ldiario + lparcial
menor <- 9999999999

ESTRATEGIA

Enquanto o custo for maior que 0 fazer o procedimento abaixo
Mostra "--Servico n. (servico):"
Obtem (custo)
Se o custo for maior que 0
Incrementa o servico
Obtem(distancia) enquanto distancia menor que 0 ou maior que 20 kms
Obtem (gorjeta) enquato gorjeta menor que 0
Calcula lparcial, chamando a funçao
Se o lucro parcial (lparcial) for menor que o menor lucro parcial ate entao calculado, o menor lucro parcial passa ao lucro parcial, e o numero do serviço ser igual ao serviço desse lucro parcial
Mostra(lparcial)
Calcula ldiario ( ldiario <- ldiario + lparcial ), soma dos lucros parciais de todos os serviços
Quando o custo introduzido for 0
Mostra "RESUMO FINAL:"
Mostra (servicos)
Mostra (ldiario)
Mostra (menor, servico)

PSEUDO CODIGO

INICIO eat@home
    servico <- 1
    menor <- 999999999
    ENQUANTO (custo > 0) FAZER
        MOSTRA(servico)
        OBTEM (custo)
        SE (custo > 0) ENTAO
            servico <- servico + 1
            FAZER
                OBTEM(distancia)
            ENQUANTO (distancia < 0 || distancia > 20)
            FAZER
                OBTEM(gorjeta)
            ENQUANTO(gorjeta < 0)
            lparcial <- CHAMARFUNCAO lucroest
            SE (lparcial < menor)
                menor <- lparcial
                ser <- servico
            FIM SE
        FIM SE
    FIM ENQUANTO
FIM eat@home
*/
// CODIGO EM C //

void main()
{
    float custo, distancia, gorjeta;
    float lparcial, ldiario;
    int servico = 1, servmenor;
    float menor = 999999999;
    while(custo != 0)
    {
        printf("--Servico n.%d\n",servico);
        printf("  Indique o custo: ");
        scanf("%f",&custo);
       if(custo > 0)
       {
            do
            {
                printf("  Indique a distancia(Kms): ");
                scanf("%f",&distancia);
            }while(distancia < 0 || distancia > 20);
            do
            {
                printf("  Indique a gorjeta: ");
                scanf("%f",&gorjeta);
            }while(gorjeta < 0);
            lparcial = lucroest(custo, distancia, gorjeta);
            printf("Lucro Parcial %.2f Eur\n", lparcial);
            if(lparcial < menor)
            {
                menor = lparcial;
                servmenor = servico;
            }
            ldiario += lparcial;
            servico++;
       }
    }
    printf("\nRESUMO FINAL:\n");
    printf("Numero de servicos: %d\n",servico-1);
    printf("Lucro Diario: %.2f Eur\n",ldiario);
    printf("O menor lucro ocorreu no servico n. %d com %.2f Eur\n", servmenor, menor);
}

