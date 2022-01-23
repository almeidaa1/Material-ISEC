/*
-DADOS DE ENTRADA-
frase (string) : frase passada como argumento introduzida pelo utilizador
tam (inteiro) : tamanho da frase
car (char) : caracter a duplicar

-RESULTADOS PRETENDIDOS-
Duplicar o caracter passado como argumento toda a vez que ele aparecer na frase
Retornar 1 se a string for modificada, e 0 se nao for
*/
#include <stdio.h>
#include <string.h>
#define TAM 100

int duplica(char frase[], int tam, char car);

int main(void) {
	char frase[TAM], car;

	printf("Frase: \n");
	gets(frase);
	printf("Caracter a multiplicar: \n");
	scanf("%c", &car);
	printf("\nMudou ? (0 nao, 1 sim) : %d\n\nFrase : ",duplica(frase, TAM, car));
	puts(frase);
}

int duplica(char frase[], int tam, char car) {
	int j, i, mudou = 0;
	for(i = 0; frase[i] != '\0'; i++) {
		if(frase[i] == car) {
			for(j = strlen(frase) + 1; j > i; j--) {
				frase[j] = frase[j-1];
				mudou = 1;
			}
			i = j + 1;
		}
	}
	if(mudou)
		return 1;
	else
		return 0;
}
