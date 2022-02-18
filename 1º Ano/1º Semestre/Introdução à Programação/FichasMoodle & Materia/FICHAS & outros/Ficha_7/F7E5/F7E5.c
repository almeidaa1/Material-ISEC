/*
-DADOS DE ENTRADA-
frase (string) : frase passada como argumento
palavra (string) : palavra a meter no meio da frase
posi (inteiro) : posicao em que a palavra vai ser inserida

-RESULTADOS PRETENDIDOS-
Colocar o palavra na posiçao passada como argumento
*/

                                                            /// Alinea (a) e (b) ///

#include <stdio.h>
#include <string.h>
#define TAM_FRASE 150
#define TAM_PALAVRA 20

int main(void) {

	char frase[TAM_FRASE];
	char palavra[TAM_PALAVRA];
	int posi;

	printf("Frase: \n");
	gets(frase);
	printf("Palavra a inserir: \n");
	gets(palavra);
	printf("Posicao: \n");
	scanf("%d", &posi);
	adiciona(frase, palavra, posi);
	puts(frase);
}

void adiciona(char frase[], char palavra[], int posi) {
	int j = 0, i;
	if(strlen(frase) + strlen(palavra) < TAM_FRASE){
		if(strlen(frase) > posi){
			for(i = strlen(frase); i >= posi; i--) {
				frase[strlen(palavra)+i] = frase[i-1];
			}
			for(i = posi; i < posi + strlen(palavra); i++) {
				frase[i] = palavra[j++];
			}
		}else if (strlen(frase) < posi) {
			frase[posi-1] =' ';
			for(i = posi; i < posi + strlen(palavra); i++) {
				frase[i] = palavra[j++];
			}
		}
	}
}

