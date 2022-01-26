///Especificaçoes e Analise da funçao ( Alinea A ) ///

/*DADOS DE ENTRADA
n (inteiro) : numero de pai natais

RESULTADOS PRETENDIDOS
caixa (inteiros) : numero de caixas necessarias para empacotar todos os pai natais

PROCESSAMENTO REQUERIDO
se o n % 10 igual a 0 fazer
caixa <- (parte inteira)(n / 10)
senao
caixa <- (parte inteira)((n / 10) + 1)

ESTRATEGIA
Recebe o numero de pai natais (n
Se o numero de pai natais (n) resto da divisao por 10 for igual a 0, entao o numero de caixas vai ser igual a parte inteira da divisao do numero de
                               pai natais por 10
Senao, o numero de caixas vai ser igual a parte inteira da divisao do numero de pai natais por 10 mais 1
Devolve o numero de caixas

PSEUDOCODIGO

INICIOFUNCAO caixas
    RECEBE (n)
    SE (n % 10 <- 0)
        caixa <- n / 10
    SENAO
        caixa <- ( n / 10 ) + 1
    FIM SE
    DEVOLVE(caixa)
FIMFUNCAO caixas


/// CODIGO EM C ///

int caixas(int n)
{
    int caixa;
    if (n % 10 == 0)
    {
        caixa = n / 10;
    }
    else
    {
        caixa = (n / 10) + 1;
    }
    return caixa;
}
*/

/// Especificaçoes e Analise do Problema  ( Alinea B ) ///

/*DADOS DE ENTRADA
n (inteiro) : numero de Pai Natais a ser encomendado

RESULTADOS PRETENDIDOS
encomenda (inteira) : numero da encomenda
caixa (inteiro) : numero de caixas necessarias para empacotar todos os Pai Natais (o numero de caixas vai ser obtido ao chamar mos a funçao com
                                    o numero de pai natais encomendados)
tcaixas (inteiro) : numero total de caixas para o todas as encomendas
maior (inteiro) : maior numero de caixas necessarias para uma encomenda
media (inteiro) : numero da media de caixas por encomenda


PROCESSAMENTO REQUERIDO
encomenda <- 1
encomenda <- encomenda + 1
caixa <- CHAMARFUNCAO caixas(n)
tcaixas <- 0
tcaixas <- tcaixas + caixas
maior <- 0
media <- tcaixas / encomenda


ESTRATEGIA

Fazer o procedimento abaixo com os tracinhos enquanto o numero de pai natais for diferente de 0
-Mostra o numero da encomenda (encomenda)
-Obtem numero de pai natais
-Verificar se o numero de pai natais é maior que zero, se for:
-incrementa a encomenda
-Chama a funçao para calcular o numero de caixas (caixa) necessarias para empacotar o numero de pai natais obtido
-Mostra o numero de caixas necessarias (caixa) .O total de caixas passa ao numero de caixas calculado (tcaixas), e vai somando todas a caixas calculadas ao longo do programa
-Se o numero de caixas for maior que o maior numero de caixas até entao calculado, o maior numero de caixas passa a esse numero de caixas (maior <- caixa)
Calcula a media (media)
Por fim, mostra o numero total de caixas (tcaixas), o maior numero de caixas necessarias para uma  encomenda  e o  numero da media de caixas por
encomenda.

PSEUDOCODIGO

INICIO painatais
    encomenda <- 1
    tcaixas <- 0
    maior <- 0
    FAZER
        MOSTRA (encomenda)
        OBTEM (n)
        SE (n>0)ENTAO
            encomenda <- encomenda + 1
            caixa <- CHAMARFUNCAO caixas(n)
            MOSTRA(caixa)
            tcaixas <- tcaixas + caixa
            SE (caixa > maior)ENTAO
                maior <- caixa
            FIM SE
        FIM SE
    ENQUANTO (n != 0)
    media <- tcaixas / encomenda
    MOSTRA ("Resumo das Encomendas:")
    MOSTRA (tcaixas, maior, media)
FIM painatais

/// CODIGO EM C ///

void main()
{
    int n, encomenda = 1, tcaixas = 0, maior, mediaint, caixa;
    float media;
    do
    {
        printf("Numero de Pai Natais da encomenda %d: ",encomenda);
        scanf("%d",&n);
        if(n>0)
        {
            encomenda++;
            caixa = caixas(n);
            printf("Numero de caixas de caixas necessario: %d\n", caixa);
            tcaixas += caixa;
            if(caixa > maior)
            {
                maior = caixa;
            }
        }
    }while(n!=0);
    mediaint = tcaixas / (encomenda-1);
    media = mediaint;
    printf("\nResumo das encomendas:\n");
    printf("Numero Total de Caixas: %d\n", tcaixas);
    printf("A maior encomenda necessita de %d caixas\n", maior);
    printf("Medias de caixas por encomenda: %.2f\n", media);
}
*/




                                                    /// EXERCICIO FINAL (COM TODAS AS FUNÇOES) ///

#include <stdio.h>

int caixas(int n)
{
    int caixa;
    if (n % 10 == 0)
    {
        caixa = n / 10;
    }
    else
    {
        caixa = (n / 10) + 1;
    }
    return caixa;
}

void main()
{
    int n, encomenda = 1, tcaixas = 0, maior, mediaint, caixa;
    float media;
    do
    {
        printf("Numero de Pai Natais da encomenda %d: ",encomenda);
        scanf("%d",&n);
        if(n>0)
        {
            encomenda++;
            caixa = caixas(n);
            printf("Numero de caixas de caixas necessario: %d\n", caixa);
            tcaixas += caixa;
            if(caixa > maior)
            {
                maior = caixa;
            }
        }
    }while(n!=0);
    media = tcaixas / (encomenda-1);
    printf("\nResumo das encomendas:\n");
    printf("Numero Total de Caixas: %d\n", tcaixas);
    printf("A maior encomenda necessita de %d caixas\n", maior);
    printf("Medias de caixas por encomenda: %.2f\n", media);
}
