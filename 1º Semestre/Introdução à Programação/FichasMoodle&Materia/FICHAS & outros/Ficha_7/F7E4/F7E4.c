/*
-DADOS DE ENTRADA-
frase (string) : frase introduzida pelo utilizador

-RESULTADOS PRETENDIDOS-
cont (inteiro) : numero de vezes que a primeira palavra se repete

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 500

int main(void) {

	char frase[MAX];
	char primeira[MAX];
	char palavra[MAX];
	int i, x, cont1 = 0, sim = 1;

	printf("Digite a frase: \n");
	gets(frase);

	for(i = 0; i < strlen(frase); i++) {
		frase[ i ] = tolower(frase[ i ]);
	}
	for(i = 0; frase[i] != ' ' && frase[i] != '\0'; i++) {
		cont1++;
		primeira[i] = frase[i];
	}
	primeira[cont1] = '\0';
	for(i = cont1; frase[i] != '\0'; i++) {
		int repete = 0;
		while(frase[i] == ' ') {
			i++;
		}
		x=0;
		while(frase[i] != ' '){
			palavra[x] = frase[i];
			i++;
			x++;
		}
		palavra[x] = '\0';
		if(strcmp(primeira, palavra) == 0) {
			sim++;
		}
	}
	printf("\nPalavra : %s \t Repete-se : %d vezes\n", primeira, sim);
}


