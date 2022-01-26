/*
!! Exericio 41 (a) !!

Especificaçoes e analise do problema

-DADOS DE ENTRADA-
peso (real) : peso do individuo
altura (real) : altura do individuo

-RESULTADOS PRETENDIDOS-
IMC (real) : Indice de massa corporal do individuo

-RECONHECIMENTO REQUERIDO
Recebe (p, h)
Calcula IMC <- p/(h*h)
Retorna IMC

-PSEUDO CODIGO-
INICIOFUNCAO imc
RECEBE(p,h)
imc <- p/(h*h)
RETORNA Imc

*/
/*
!! Exercicio 41 (b) !!

Especificaçoes e Analise do Problema

-DADOS DE ENTRADA-
peso (Real) : peso do individuo
altura (Real) : altura do individuo

-RESULTADOS PRETENDIDOS-
IMC (real) : Indice de massa corporal do individuo
IMC igual ou inferior de 18.5(string): IMC "Abaixo do peso normal"
.....

-CONHECIMENTO REQUERIDO-
Obtem (p, h)
Calcula IMC ( ao chamar mos a funcao da alinea ( a ) utilizada para calcular o IMC )
Se IMC igual ou inferior de 18.5, "Abaixo do peso normal"
Se IMC superior a 18.5 e inferior ou igual a 25, "peso normal"
....

-PSEUDO CODIGO-
INICO programa
OBTEM (p, h)
indice <- CHAMARFUNCAO Imc
SE (indice <=18.5) ENTAO
    MOSTRA ("Abaixo do Peso Normal")
SENAO
    SE (indice <=25) ENTAO
        MOSTRA("Peso Normal")

        ...
    FIM SE
FIM SE
FIM programa
*/

// CODIGO EM C //

#include <stdio.h>

float Imc(float,float);

void main()
{
    float p, h, ind;
    printf("Peso: ");
    scanf("%f",&p);
    printf("Altura: ");
    scanf("%f",&h);
    ind = Imc(p,h);
    if (ind <= 18.5){
        printf("Abaixo do Peso Normal");
    }else if (ind <= 25) {
        printf("Peso Normal");
    }else if (ind <=30) {
        printf("Acima Peso Normal");
    }else {
        printf ("Obsidade");
    }

    printf ("\nImc de %f\n",ind);
}

float Imc(float p, float h){
float imc = p/(h*h);
return imc;
}
