#include <stdio.h>
#define N 3

void matrizMatriz(int a[][3], int nLinhas) {
	for(int i = 0; i < nLinhas; i++){
		for(int j = 0; j < 3; j++) {
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}

void main() {
	int a[N][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	matriz(a, N);
}