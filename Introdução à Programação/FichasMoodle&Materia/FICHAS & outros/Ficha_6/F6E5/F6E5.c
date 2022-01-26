/*
-Dados de entrada-
numero[] (inteiro) : numero a verificar se é capicua

-Resultados Pretendidos-
Se é capicua ou nao
*/

#include <stdio.h>

void main() {

	int num, resultado, digito[100], cont = 0, capicua, digitos=0;

	printf("Numero: ");
	scanf("%d", &num);

	for(resultado = 1; resultado > 0; digitos++) {
            digito[digitos] = num % 10;
			if (digito[0] == 0) {
				printf("Nao pode comecar com 0\n");
				exit(0);
			}else{
				num /= 10;
				resultado = num;
			}
	}

	for(int i = 0; i < digitos; i++) {
		if(digito[i] == digito[digitos-(i+1)]) {
			capicua = 1;
		}else {
			capicua = 0;
		}
	}
	if(capicua == 1) {
		printf("\nO numero e Capicua\n");
	}else {
		printf("\nO numero NAO e Capicua\n");
	}
}
