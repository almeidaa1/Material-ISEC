#include <stdio.h>

int igual(int v1[], int v2[], int tam) {
	int cont = 0;
	for (int i = 0; i < tam; i++) {
		if (v1[i] == v2[i]){
			cont++;
		}
	}
	if (cont == tam) {
		return 1;
	}else {
		return 0;
	}
}

void main() {

	int tam;

	printf("Tamanho dos Vetores: ");
	scanf("%d", &tam);
	int v1[tam];
	int v2[tam];
	printf("|| Vetor 1 ||\n");
	for(int i = 0; i < tam; i++) {
		printf("vetor1[%d] = ",i);
		scanf("%d", &v1[i]);
	}
	printf("|| Vetor 2 ||\n");
	for(int i = 0; i < tam; i++) {
		printf("vetor2[%d] = ",i);
		scanf("%d", &v2[i]);
	}
	printf("%d",igual(v1, v2, tam));
}

