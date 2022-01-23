/*
Especifica�oes ou Analise do problema

-DADOS DE ENTRADA-
vb (inteiro) : n� de votos em branco
vn (inteiro) : n� de votos nulos
vv (inteiro) : n� de votos v�lidos

-RESULTADOS PRETENDIDOS-
vtotal (inteiro) : n� de eleitores (votantes) total
pvb (reais) : percentagem de votos em branco em rela�ao ao numero total de votantes
pvn (reais) : percentagem de votos nulos em rela�ao ao numero total de votantes
pvv (reais) : percentagem de votos v�lidos em rela�ao ao numero total de votantes

-Processamento Requerido-
Obter o numero de votos brancos, nulos e v�lidos
Calcular o total de votos (brancos, nulos e v�lidos) mostrando-o
Calcular as percentagens de cada tipo de voto em rela�ao ao numero total de votantes, mostrodo-as

-PSEUDO C�DIGO-
INICIO votos
    OBTEM(vb, vn, vv)
    vtotal <- vb + vn + vv
    MOSTRA (vtotal)
    pvb <- 100*vb/vtotal
    pvn <- 100*vn/vtotal
    pvv <- 100*vv/vtotal
    MOSTRA(pvb, pvn, pvv)
FIM PROGRAMA
*/


#include <stdio.h>
#include <stdlib.h>

int main(){

int vv, vb, vn, vtotal;
float pvb, pvv, pvn;
char p = '%';


printf("Numero de votos em Validos: ");
scanf("%d",&vv);
printf("Numero de votos em Nulos: ");
scanf("%d",&vn);
printf("Numero de votos em Brancos: ");
scanf("%d",&vb);
vtotal = vv + vn + vb;
printf("\nO numero total de votos e de : %d\n",vtotal);
pvb = (float)vb/(float)vtotal*100;
pvv = (float)vv/(float)vtotal*100;
pvn = (float)vn/(float)vtotal*100;
printf("A percentagem de votos e de %.1f%c / %.1f%c / %.1f%c ( PercentVotosBrancos / PercentVotosValidos / PercentVotosNulos )\n", pvb, p, pvv, p, pvn,p);


}

