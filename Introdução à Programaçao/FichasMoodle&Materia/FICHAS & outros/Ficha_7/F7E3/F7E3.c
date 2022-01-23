/*
-DADOS DE ENTRADA-
frase (string) : frase introduzida pelo utilizador

-RESULTADOS PRETENDIDOS-
Cada palavra da frase numa nova linha
*/

#include <stdio.h>
#include <string.h>
#define TAM 500

int main(void) {

	char frase[TAM];
	int i, x;

	printf("Digite uma frase: \n");
	gets(frase);
	printf("\n");
	for(i = 0; i < strlen(frase); i++) {
		if(frase[ i ] != ' ') {
			for(x = i; frase[x] != ' ' && frase[x] != '\0'; x++) {
				printf("%c", frase[x]);
				i++;
			}
			printf("\n");
		}
	}
}

