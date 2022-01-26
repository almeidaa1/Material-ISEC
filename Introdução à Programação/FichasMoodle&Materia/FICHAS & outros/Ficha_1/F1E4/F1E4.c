/*
Especificaçoes e Analise do problema

-DADOS DE ENTRADA-
nota1 (real) : nota primeira frequencia
nota2 (real) : nota segunda frequencia
exame (real) : nota exame

-RESULTADOS PRETENDIDOS-
notafinal (real) : nota final do disciplina de Introduçao a Programcao

-PROCESSAMENTO REQUERIDO-
examefinal<-(exame*20)/16
nota1final<-(nota1*2)/20
nota2final<-(nota2*2)/20
notatotal<-examefinal + nota1final + nota2final

-ESTRATEGIA-
Obter a nota1, nota2, exame
Calcular examefinal, nota1final, nota2final
Calcular notatotal
Mostrar notatotal

-PSEUDOCODIGO-

INICIO programa
 OBTEM (nota1, nota2, exame)
 examefinal<-(exame*20)/16
 nota1final<-(nota1*2)/20
 nota2final<-(nota2*2)/20
 notatotal<-examefinal + nota1final + nota2final
 MOSTRA(notatotal)
FIM programa
*/


// MANEIRA MAIS "COMPLICADA //
 #include <stdio.h>

void main()
{
    double nota1, nota2, exame;
    double nota1final, nota2final, examefinal, notafinal;
    printf("Nota Primeira Frenquencia: ");
    scanf("%lf",&nota1);
    printf("Nota Segunda Frenquencia: ");
    scanf("%lf",&nota2);
    printf("Nota Exame Frenquencia: ");
    scanf("%lf",&exame);
    nota1final = (nota1*2)/20;
    nota2final = (nota2*2)/20;
    examefinal = (exame*16)/20;
    notafinal = nota1final + nota2final + examefinal;
    printf("A nota final da disciplina de Introducao a Programacao vai ser de: %.2lf valores",notafinal);
}
