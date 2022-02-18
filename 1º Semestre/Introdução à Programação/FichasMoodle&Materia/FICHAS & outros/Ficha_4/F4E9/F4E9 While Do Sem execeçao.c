/*

Análise Do Problema

DADOS DE ENTRADA
n1, n2, ..., n (inteiro) : Numeros inteiros introduzidos pelo utilizador

RESULTADOS PREETENDIDOS
maior (inteiro) : Maior Numero introduzido pelo utilizador
posi (inteiro) : Posiçao na sequencia do maior numero introduzido pelo utilizador
tam (inteiro) : Tamanho da sequencia de numeros introduzidos pelo utilizador

PROCESSAMENTO REQUERIDO
Obtem um n do utilizador
Se este for 0, o programa pára, e mostra o maximo, a sua posiçao e tamanho de sequencia
Se o n introduzido for maior que 0, obtem o n seguinte (n2)
Incrementa 1 ao tamanho, e este é comparado com o n anterior (n1) que ate entao é o maior sendo que se o seu valor lido for maior passa a maior numero
gravando a sua posiçao.
Fazer o processo acima enquanto o os valores introduzidos forem diferentes de zero e positivos

CONHECIMENTO REQUERIDO
maior <- n ; posi <- tam ; tam <- 0

PSEUDO CODIGO
INCIO programa
    OBTEM (n)
        tam <- 0
        ENQUANTO (n > 0)
            tam++
            SE (n>maior)
                maior <- n
                posi <- tam
            Fim SE
            OBTEM (n)
        FIM ENQUANTO
    MOSTRAR (maior, posi, tam)
FIM programa

*/

#include <stdio.h>
/*CICLO WHILE DO*/
void main(){

int n, tam, posi, maior ;

printf("Digite um numero inteiro positivo (quando digitado zero este faz com que pare de digitar numeros): ");
scanf("%d",&n);
    tam=0;
        while (n>0){
            tam++;
            if (n>maior){
                maior = n;
                posi = tam;
            }
        printf("Digite um numero inteiro positivo (quando digitado zero este faz com que pare de digitar numeros): ");
        scanf("%d",&n);

}
printf("Maximo: %d\nSurgiu na posicao: %d\nTamanho da sequencia: %d", maior, posi, tam);
}

