#include <stdio.h>
#define TAM 100

void obtemFrase(char frase[]);
void separaFrase(char frase[]);

void main(void) {
	char frase[TAM];
	
	obtemFrase(frase);
	separaFrase(frase);
}

void obtemFrase(char frase[]) { //obtem a frase do utilizador
	printf("Digite a frase: ");
	gets(frase);
}

void separaFrase(char frase[]) { //separa a frase por palavras em linhas diferentes
	for(int i = 0; frase[i] != '\0'; i++) {
		if(frase[i] != ' ') {
			while(frase[i]!= ' ' && frase[i] != '\0'){
				printf("%c", frase[i]);
				i++;
			}
			putchar('\n');
		}
	}
}