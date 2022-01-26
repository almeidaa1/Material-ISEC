/*
Especificações ou análise do problema

-DADOS DE ENTRADA-
n1,n2,...n (inteiro) sequência numeros inteiros

-RESULTADOS PRETENDIDOS-
maior (inteiro) : maior dos valores introduzidos
posicao (inteiro) : posição do maior valor inteiro na sequência
tam (inteiro) : tamanho da sequência

-PROCESSAMENTO REQUERIDO-
Fazer o procedimento abaixo enquanto n for positivo
    Obter o próximo número da sequência
    Se o primeiro numero da sequencia for positivo vamos iniciar o processo (tam <- 0, maior <- n, posiçao <- tam)
    Comparar o maior com os números seguintes da sequência
    Guardar o maior e a posiçao (Que será o tamanho atual da sequência)
    Incrementar tam à medida que os valores forem introduzidos

-PSEUDO CÓDIGO-

INICIO programa
tam <- 0
FAZER
    OBTEM(n)
    SE (n>0) ENTAO
        tam <- tam + 1
        SE(tam = 1) ENTAO
            maior <- n
            posicao <- tam
        SENAO
            SE (n>maior) ENTAO
                posicao <- tam
            FIM SE
        FIM SE
    FIM SE
ENQUANTO (n≠0)
    MOSTRAR(maior, posiçao, tam)
FIM programa
*/






