/*
-DADOS DE ENTRADA-
frase (char) : frase introduzida pelo utilizador

-RESULTADOS PRETENDIDOS-
inverte (char) : frase introduzida pelo utilizador invertida

*/

#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void) {

	char frase[TAM];
	printf("Frase a Inverter: \n");
	gets(frase);
	char inverte[TAM];
	for(int i = 0; frase[i] != '\0'; i++) {
		inverte[i] = frase[strlen(frase)-(i+1)];
	}
	puts(inverte);
}
