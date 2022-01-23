/*
-DADOS DE ENTRADA-
 frase (string) : string a passar pelo utilizador

-RESULTADOS PRETENDIDOS-
Devolver o numero de vezes que o primeiro caracter da string aparece ao longo da frase
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 500

int contaPrimeiro(char frase[]);

int main(void) {
	char frase[ MAX ];

	printf("Frase: \n");
	gets(frase);
	printf("%d",contaPrimeiro(frase));
}

int contaPrimeiro(char frase[]) {
	int cont = 0, x=0;
	for (int i = 0; frase[i] != '\0'; i++) {
		frase[i] = toupper(frase[i]);
		while (frase[x] == ' ') {
			x++;
		}
		if(frase[i] == frase[x]) {
			cont++;
		}
	}
	return cont;
}
