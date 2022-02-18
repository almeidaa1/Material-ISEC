/*

***************************************************************|| PROBLEMA ||*********************************************************************

a) mostrar o numero de d�gitos impares num numero inteiro positivo inserido (ex. 12345 - mostra 3 por ter tr�s d�gitos impares);

b) sequencia de n�meros em que mostra os seus d�gitos impares usando a alinha a) como fun��o e termina quanto insere 0.
Fazer: Mapa de an�lise, pseudoc�digo OU fluxograma e c�digo em C.
Dura��o: 60 min

**************************************************************************************************************************************************

                                                                || ALINEA ( a ) ||

Especifica�oes e analise da fun�ao

DADOS DE ENTRADA
n(inteiro) : numero inteiro positivo intrudozido pelo utilizador

RESULTADOS PRETENDIDOS
dimpares (inteiro) :  numero de digitos impares do numero inteiro positivo


PROCESSAMENTO REQUERIDO
digito <- n % 10
clas <- digito % 10
impar <-0
resultado <- n/10

ESTRATEGIA
Obter numero do utilizador
Enquanto (resultado > 0)
    Calcular digito (digito <- n % 10)
    Calcular clas (clas <- digito % 10)
    Se clas for igual a 1 entao incrementa impar
    Calcular resultado (resultado <- n/10)
    E o n passa a resultado
Sai do ciclo
Mostra (impar)

PSEUDOCODIGO

INICIOFUN�AO impar
    OBTEM(n)
    impar <- 0
    ENQUANTO(resultado > 0)FAZER
        digito <- n % 10
        clas <- digito % 10
        SE (clas == 1) ENTAO
            impar <- impar + 1
        FIM SE
        resultado <- n / 10
        n <- resultado
    FIM ENQUANTO
    MOSTRA(impar)
FIMFUN�AO impar


                                                        || ALINEA A // CODIGO C // ||
#include <stdio.h>

void main()
{
    int n, digito, impar = 0, clas;
    int resultado;

    printf("Numero: ");
    scanf("%d",&n);
    while(resultado > 0)
    {
        digito = n % 10;
        clas = digito % 2;
        if (clas==1)
        {
            impar++;
        }
        resultado = n / 10;
        n = resultado;
    }
    printf("\n->Tem %d digito(s) impar(es)\n", impar);
}

                                                                || ALINEA ( b ) ||

Especifica�ao e analise do Problema

DADOS DE ENTRADA
n, n1, .... (inteiros) : numeros introduzidos pelo utilizador enquanto forem maiores que 0

RESULTADOS PRETENDIDOS
dimpares (inteiros) : digitos impares do numero

PROCESSAMENTO REQUERIDO
n<-1

ESTRATEIGA
Enquanto n diferente de 0
Obtem n
Se n for maior que 0 chamar fun�ao impar
Senao mostra "Valor invalido"

-PSEUDOCODIGO-

INICIO programa
    ENQUANTO (n!=0) FAZER
        OBTEM (n)
        SE (n>0) ENTAO
            CHAMARFUNCAO impar(n)
        SENAO
            MOSTRA("Valor invalido")
        FIM SE
    FIM ENQUANTO
FIM PROGRAMA
*/
                                                // || ALINEA B  *CODIGO C*  || //
#include <stdio.h>

void main()
{
    int n=1;
    while(n!=0)
    {
        printf("Numero: ");
        scanf("%d",&n);
        if(n>0)
        {
            impar(n);
            printf("\n");
        }
        else
        {
            printf("Valor invalido\n");
        }
    }
}

void impar(int n)
{
    int digito, impar = 0, clas;
    int resultado;
    while(resultado > 0)
    {
        digito = n % 10;
        clas = digito % 2;
        if (clas==1)
        {
            impar++;
            printf("| %d | ",digito);
        }
        resultado = n / 10;
        n = resultado;

    }
    printf("\n-> Sao %d os digito(s) impar(es) da sequencia\n", impar);
}
