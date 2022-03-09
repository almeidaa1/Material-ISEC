#include <stdio.h>
#define N 5

int verifia(int a[][3], int nLinhas, int linha); // Verifica se existe numeros iguais // 
void mostraMatriz(int a[][3], int nLinhas); // Funçao do exercicio 9 - Mostra a matriz //
void matriz(int a[][3], int nLinhas); // Funçao que pede os primeiros numeros de cada linha, e calcula o quadrado e o cubo //
	
void main(){
	int a[N][3];
	matriz(a, N);
}

void matriz(int a[][3], int nLinhas) {

	for(int i = 0; i < nLinhas; i++) {
		do{
			printf("Valor a colocar na posicao [%d][0]: ", i);
			scanf("%d", &a[i][0]);
		}while(a[i][0] < 1 || a[i][0] > 100 || verifia(a, N, i));
		for (int j = 1; j < 3; j++) {
			if(j==1)
				a[i][j] = a[i][0]*a[i][0];
			else
				a[i][j] = a[i][0]*a[i][0]*a[i][0];
		}
	}
	mostraMatriz(a, N);
}

int verifia(int a[][3], int nLinhas, int linha){
	int nver = a[linha][0], cont = 0;

	for(int i = 0; i < nLinhas; i++){
		if(nver == a[i][0])
			cont++;
	}
	if(cont >= 2)
		return 1;
	else
		return 0;
}

void mostraMatriz(int a[][3], int nLinhas) { // Funçao do exercicio 9 - Mostra a matriz //

	for(int i = 0; i < nLinhas; i++){
		for(int j = 0; j < 3; j++) {
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}