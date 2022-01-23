/*
Especificaçoes e analise do problema

DADOS DE ENTRADA
salario,... (float) : salarios dos trabalhadores

RESULTADOS PRETENDIDOS
media (float) : media de salarios da empresa

PROCESSAMENTO REQUERIDO
contador <- 0
totalsal <- 0
media <- totalsal / contador

ESTRATEGIA

Enquando salario maior que 0
Obter salario
Incrementar contador
totalsal <- totalsal + salario
 Sair do ciclo
Calcular media
Mostrar media

PSEUDOCODIGO

INICIO programa
    ENQUANTO (salario > 0)
    OBTER(salario)
    contador <- contador + 1
    totalsal <- totalsal + salario
    FIM ENQUANTO
    media <- totalsal / contador
    MOSTRA(media)
FIM programa
*/


//CODIGO EM C//

#include <stdio.h>

void main()
{
    int contador=0;
    float salario, totalsal=0, media;

    while(salario>0)
    {
        printf("Salario: ");
        scanf("%f",&salario);
        if(salario>0)
        {
            contador++;
            totalsal += salario;
        }
    }
    media = totalsal / (float)contador;
    printf("Media de salarios da empresa: %.2f dineros ",media);

}

// CICLO COM DO WHILE //

/*

#include <stdio.h>

void main()
{
    float salario, totalsalario=0, media;
    int contador=0;

    do
    {
        printf("Salario: ");
        scanf("%f",&salario);
        if(salario>0)
        {
            contador++;
            totalsalario+=salario;
        }
    }while(salario>0);
    media = totalsalario / (float)contador;
    printf("O media de salarios da empresa e de %.2f",media);

}

*/
