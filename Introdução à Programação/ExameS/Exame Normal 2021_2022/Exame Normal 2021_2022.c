
/// Exame Época Normal - 2022   (24 janeiro)    * 2horas * ///  ( O primeiro exercício deste exame era Teoria o que não consta nesta resolução )

/// Exercicio 2  ( 5.5 valores ) ///

#include <stdio.h>
#define N 4

int insere_num (float a[], int n_elem, int tam, float num);

void main(void) {
	int numero_elem = 0, i, cont;
	float valor, tabela[N];
	for(cont = 0; cont < 6; cont++) {
		printf("Valor a inserir: \n");
		scanf("%f", &valor);
		numero_elem = insere_num(tabela, numero_elem, N, valor);
		for(i = 0; i < numero_elem; i++){
			printf("%.2f\t", tabela[i]);
		}
		printf(" -> %d elementos\n", numero_elem);
	}
}

int insere_num (float a[], int n_elem, int tam, float num) {
	int i, x;
	if(n_elem < 4){
		if(n_elem == 0){
			a[n_elem] = num;
			n_elem++;
		}
		else {
			for(i = 0; i < n_elem; i++) {
				if(a[i] >= num) {
					for(x = n_elem; x > i; x--){
						a[x] = a[x-1];
					}
					a[i] = num;
					n_elem++;
					return n_elem;
				}else {
					if(i == n_elem - 1){
						a[i+1] = num;
					}
				}
			}
			n_elem++;
		}
	}
	return n_elem;
}

/// Exercicio 3 (4.5 Valores) ///

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 500

int Palindromo(char str[]) {
	int i, x = 0, cont;
	char palind[MAX];

	for(i = 0; str[i] != '\0'; i++) {
		while(str[i] == ' ')
			i++;
		while(str[i] != ' ' && str[i] != '\0') {
			str[i] = tolower(str[i]);
			str[i] = palind[x];
			i++;
			x++;
		}
		palind[x] = '\0';
	}
	for(x = 0; x < strlen(palind)/2; x++) {
		if(palind[x] != palind[strlen(palind)-(x+1)])
			return 0;
	}
	return 1;
}

void main() {
	char str1[MAX];
    printf("Introduza a frase a verificar se e Polindromo: ");
    gets(str1);
	if(Palindromo(str1))
		printf("\nA frase e um palindromo\n");
	else
		printf("\nA frase nao e um palindromo\n");
}
