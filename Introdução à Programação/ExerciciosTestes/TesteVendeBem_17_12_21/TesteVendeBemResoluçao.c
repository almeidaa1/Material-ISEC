/*                                                                                              ALINEA (a)
Especificaçoes e Analise da Funçao

DADOS DE ENTRADA
a ( inteiro ) : area da loja
tipo ( texto ) : tipo de loja (A ou B)

RESULTADOS PRETENDIDOS
max ( inteiros ) : numero maximo de pessoas que podem entrar na loja

PROCESSAMENTO REQUERIDO
NENHUM

ESTRATEGIA

Recebe (a, tipo)
Se (a >= 50 E a<250) entao se o tipo de loja igual A o maximo de pessoas vai ser igual a 5
Senao se (a >=250) entao se o tipo de loja igual a B o maximo de pessoas vai ser igual a 10
Devolve o maximo de pessoas que a loja pode conter (max)

PSEUDO CODIGO

INICIOFUNCAO maxpessoas
RECEBE (a, tipo)
    SE (a >= 50 E a<250) ENTAO
        SE (tipo <- A) ENTAO
            max <- 5
        SENAO
            SE (tipo <- B) ENTAO
                max <- 10
            FIM SE
        FIM SE
    SENAO
        SE (a >= 250) ENTAO
            SE (tipo <- A) ENTAO
                max <- 10
            SENAO
                SE (tipo <- B) ENTAO
                    max <- 20
                FIM SE
            FIM SE
        FIM SE
    FIM SE
FIMFUNCAO maxpessoas
*/

// CODIGO C //

#include <stdio.h>

int maxpessoas(int tipo, int a)
{
    int max1;
    if(a >= 50 && a < 250)
    {
        if(tipo == 'A')
        {
            max1 = 5;
        }
        else if(tipo == 'B')
        {
            max1 = 10;
        }
    }
    else if(a >=250)
    {
        if(tipo == 'A')
        {
            max1 = 10;
        }
        else if(tipo == 'B')
        {
            max1 = 20;
        }
    }
    return max1;
}
/*
                                                                                    Alinea (b)
Especificaçoes e Analise do Problema

DADOS DE ENTRADA
a (inteiro) : Area da loja
tipo (texto) : Tipo de loja (A ou B)

RESULTADOS PRETENDIDOS
n (inteiro) : numero de pessoas que passaram pela porta

PROCESSAMENTO REQUERIDO
n <- 0
max <- CHAMARFUNCAO maxpessoas

ESTRATEGIA
Obter a area enquanto for menor que 50
Obter tipo de loja (A ou B), enquanto area for igual a A ou B, ou seja ignora os outros caracteres
Obter (movimento)
Se o movimento for igual a -1 e n igual a 0 mostra "Movimento incorreto, nao existem pessoas para sair da loja!"
Senao se movimento igual a -1 e o n maior que 0 decrementa o numero de pessoas (n) e mostra saida porque saiu uma pessoa, e o numero de pessoas que estao na loja
Se o movimento for igual a 1 e n = max (max é obtido chamando a funçao respetiva) mostra "Aguarde - limite atingido, nao podem entrar mais pessoas na loja!"
Senao se movimento igual a 1 e n < max, incrementa o movimento e mostra entrada porque entrou uma pessoa, e o numero de pessoas que estao na loja
Fazer procedimento acima até obter enquanto movimento diferente de 0
PSEUDO CODIGO

INICIO programa
    n<-0
     FAZER
        OBTEM(tipo, area)
    ENQUANTO((tipo != A OU tipo != B) E area < 50)
    limpar buffer
    max <- CHAMARFUNCAO maxpessoas
    FAZER
        OBTEM(movimento)
        SE (movimento != 0)
            SE (movimento <- -1 E n <- 0)ENTAO
                MOSTRA ("Movimento incorreto, nao existem pessoas para sair da loja!")
            SENAO
                SE (movimento <- -1 E n > 0) ENTAO
                    n <- n - 1
                    mov <- "Saida"
                    MOSTRA (mov, n)
                SENAO
                    SE (movimento <- 1 E n <- max) ENTAO
                        MOSTRA("Aguarde - limite atingido, nao podem entrar mais pessoas na loja!")
                    SENAO
                        SE (movimento <- 1 E n < max) ENTAO
                            n <- n + 1
                            mov <- "Entrada"
                            MOSTRA (mov, n)
                        FIM SE
                    FIM SE
                FIM SE
            FIM SE
    ENQUANTO(movimento != 0)
    MOSTRA (n)
*/
void main()
{
    int a, n=0, movimento, max, count = 0;
    char moventrada[] = "Entrada";
    char movsaida[] = "Saida";
    char tipo;
    do
    {
        fflush(stdin);
        printf("Insira o tipo (A ou B) e a área da loja em m2 (acima de 50m2) no formato #,#:");
        scanf("%c,%d",&tipo, &a);
    }while((tipo != 'A' || tipo != 'B') && a < 50);
    max = maxpessoas(tipo, a);
        do
        {
            printf("Insira o movimento (-1 para sair e 1 para entrar na loja, 0 para terminar):");
            scanf("%d", &movimento);
            if(movimento!=0)
            {
                if(movimento == -1)
                {
                    if(n==0)
                    {
                        printf("\nMovimento incorreto, nao existem pessoas para sair da loja!\n\n");
                    }
                    else if(n>0)
                    {
                        n--;
                        printf("%s, estao na loja %d pessoa(s)\n\n", movsaida, n);
                    }
                }
                else if(movimento == 1)
                {
                    if(n < max)
                    {
                        n++;
                        count++;
                        printf("%s, estao na loja %d pessoa(s)\n\n", moventrada, n);

                    }
                    else if(n == max)
                    {
                        printf("\nAguarde - limite atingido, nao podem entrar mais pessoas na loja!\n\n");
                    }
                }
            }
        }while(movimento != 0);
        printf("\nPasaram na loja %d pessoas\n", count);
}
