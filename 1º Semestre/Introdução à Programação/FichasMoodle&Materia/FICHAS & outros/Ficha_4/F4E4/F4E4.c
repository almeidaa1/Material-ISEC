/// EXERCICIO 4 FOLHA 4 ///

/// ESPECIFICAÇOES E ANALISE DO PROBLEMA

/*DADOS DE ENTRADA
m (inteiro) : limite inferior
n (inteiro) : limite superior

RESULTADOS PRETENDIDOS
m (inteiro) : numero que a soma do cubo dos seu digitos dá igual ao proprio numero

PROCESSAMENTO REQUERIDO
somacubo <- 0
resultado <- m / 10
digito <- m % 10
cubo <- digito * digito * digito
somacubo <- somacubo + cubo
m <- m + 1

ESTRATEGIA

Fazer o procedimento abaixo que esta nos tracinhos enquanto limite inferior menor ou igual que o limite superior
-Obtem um limite inferior (m) e um limite superior (n)
-Verficar se limite inferior é menor que o limite superior, se for:
-somacubo <- 0
-Fazer o procedimento abaixo que esta nos 2 tracinhos enquanto resultado maior ou igual a 0
--resultado <- m / 10
--digito <- m % 10
--cubo <- digito * digito * digito
--somacubo <- somacubo + cubo
-Se somacubo for igual ao m (limite inferior ,um(numero)) entao mostra esse m
-incremeta-se o m

PSEUDOCODIGO #Sem as condiçoes inicias que estao no codigo C mais abaixo# Preguiça de voltar a por xD, mas qualquer cena estao no Codigo C )

INICIO programa
    FAZER
        FAZER
            OBTEM (m, n)
        ENQUANTO (m>n)
        SE (m<n)
        somacubo <- 0
            FAZER
                resultado <- m / 10
                digito <- m % 10
                cubo <- digito * digito * digito
                somacubo <- somacubo + cubo
            ENQUANTO(resultado>0)
            SE (somacubo <- m)
                MOSTRA (m)
            FIM SE
            m <- m + 1
        FIM SE
    ENQUANTO (m<=n)
FIM programa
*/
/// CODIGO EM C ///

#include <stdio.h>

void main()
{
    int m, n, somacubo, resultado, digito, cubo;
    do
    {
        printf("Limite Inferior: ");
        scanf("%d",&m);
        if(m>=100 && m<=999)
        {
            do
            {
                printf("Limite Superior: ");
                scanf("%d",&n);
            }while(n >999 || n<m);
        }
    }while(m>n || m < 100);
    do
    {
        somacubo = 0;
        resultado = m;
        if(m<=n)
        {
            while(resultado > 0)
            {
                digito = resultado % 10;
                resultado /= 10;
                cubo = digito * digito * digito;
                somacubo += cubo;
            }
            if(somacubo == m)
            {
                printf("\n| %d |\n",m);
            }
        }
        m++;
    }while(m<=n);
}
