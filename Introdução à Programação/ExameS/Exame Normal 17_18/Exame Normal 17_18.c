/// Exame Normal 2017_2018 ///

/// Exercicio 2(a) /// (4 valores)

#include <stdio.h>

int EliminaValor(int v[], int tam, int num);

void main(void) // Nao e necessario fazer a funcao main, so fiz para confirmar valores //
{
    int v[8] = {51, 51, 51, 51, 51, 51, 51, 51}, tam = 8, num = 51;
    printf("\nTamanho do vetor sem o numero escolhido : %d\n",EliminaValor(v, tam, num));
}

int EliminaValor(int v[], int tam, int num) { // Exercicio 2(a) //

	int i, x;

	for( i = 0; i < tam; i++ ) {
		if(v[i] == num){
			tam--;
			for(x = i; x<tam; x++)
				v[x] = v[x+1];
			v[x] = 0;
		}
		if(v[i] == num)
			i--;
	}
	return tam;
}

/// Exercicio 2(b) /// (4 valores)


void main(void)
{
	int i, cc[N], num, rifas, ccidadao;

	for(i = 0; i < N; i++) {
		//do{
			printf("Rifa n %d => indique n do cartao de cidadao do comprador: ", i+1);
			scanf("%d", &cc[i]);
		//}while(verificaCC(cc) == 0);
	}
	do{
		printf("Numero da rifa premiada: ");
		scanf("%d", &num);
	}while(num <= 0 || num > N);
	ccidadao = cc[num-1]; // <- Cartao de cidadao do vencedor //
	rifas = N - EliminaValor(cc, N, cc[num-1]);
	printf("\nO vencedor tem o cartao de cidadao numero %d e comprou um total de %d rifas\n", ccidadao, rifas);
}

/// Exercicio 3 /// ( 4 valores )

#include <stdio.h>

int funcao(char frase[], char maior[]);

int main(void){
	char frase[]="Como eu gosto de IP";
	char maior[20];
	int n_palavras;

	n_palavras=funcao(frase, maior);
	printf("%d palavras\n", n_palavras);
	printf("maior palavra = %s\n", maior);
	return 0;
}

int funcao(char frase[], char maior[]) {
	int i, cont, m = 0, x, j, palavra = 0;

	for(i = 0; frase[i] != '\0'; i++){
		cont = 0;
		while(frase[i] != ' ' && frase[i] != '\0'){
			cont++;
			i++;
		}
		if(cont > m) {
			m = cont;
			j = i;
			for(x = 0; x < cont; x++) {
				maior[x] = frase[j-cont];
				j++;
			}
			maior[x] = '\0';
		}
		palavra++;
	}
	return palavra;
}


