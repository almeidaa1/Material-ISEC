#include <stdio.h>
#define TAM 6

int somamaior(int vetor[] , int tam) {
	int maior = 0, i, contador = 0;
	for(i = 0; i < tam; i++) {
		if(vetor[i] >= maior) {
			maior = vetor[i];
			contador++;
		}
		if (vetor[i-1] != maior) {
			contador=1;
		}
	}
	return maior * contador;
}

void main() {
	int vetor[TAM];
	for (int i = 0; i < TAM; i++) {
		printf("Vetor[%d] : ", i);
		scanf("%d", &vetor[i]);
	}
	printf("Devolve: %d", somamaior(vetor, TAM));
}

