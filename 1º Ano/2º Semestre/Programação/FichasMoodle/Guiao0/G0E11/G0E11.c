#include <stdio.h>
#define TAM 100

void obtemFrase(char frase[]);
void inverteFrase(char frase[]);

void main(void) {
	char frase[TAM];

	obtemFrase(frase);
	inverteFrase(frase);
}

void obtemFrase(char frase[]) { //obtem a frase do utilizador
		printf("Frase a inverter: ");
		gets(frase);
}

void inverteFrase(char frase[]) { //inverte a frase digitada pelo utilizador
	int cont = 0, i = 0, x;
	char fraseInv[TAM];

	while(frase[i] != '\0')
		i++;
	for(x = 0; x < i; x++)
		fraseInv[x] = frase[i-(x+1)];
	fraseInv[x] = '\0';
	puts(fraseInv);
}