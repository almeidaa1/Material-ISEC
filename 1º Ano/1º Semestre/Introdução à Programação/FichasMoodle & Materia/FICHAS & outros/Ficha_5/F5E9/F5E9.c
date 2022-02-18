/*
Especificaçoes e Analise do Problema

-DADOS DE ENTRADA-
n1 (real) : primeiro numero introduzido pelo utilizador
n2 (real) : segundo numero introduzido pelo utilizador

-RESULTADOS PRETENDIDOS-
inteiro (inteiro) : inteiro que mais se aproxima da media de 2 numeros reais positivos

-PROCESSAMENTO REQUERIDO-
media <- (n1+n2)/2
-ESTRATEGIA-
Obtem o n1 e n2
Calcula media
Se a parte decimal dessa media for superior a .5 o numero vai ser igual ao numero que esta mais proximo do numero seguinte
Se a parte decimal dessa media for inferia a .5 o numero vai ser igual ao numero que esta mais proximo do numero anterior

PSEUDOCODIGO

INCIOFUNCAO programa
RECEBE(n1,n2)
media <- (n1+n2)/2
i = media
SE ()

*/

int inteiro(float n1, float n2)
{
    float media = (n1 + n2)/2;
    int mediainteira = (int)media;
    if(media-mediainteira>=0.5)
    {
        return mediainteira+1;
    }else{
        return mediainteira;
    }
}

void main()
{
    float n1, n2;
    printf("Numero 1: ");
    scanf("%f",&n1);
    printf("Numero 2: ");
    scanf("%f",&n2);

    printf("O numero arredondado da media vai ser de %d",inteiro(n1,n2));
}
