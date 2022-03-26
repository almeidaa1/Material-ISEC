#include <stdio.h>
#define N 3

void iniciaTabuleiro(char galo[][N]) {
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			galo[i][j] = '_';
		}
	}
}

void printaTabuleiro(char galo[][N]) {
	printf("\n");
	printf("   1   2   3\n");
  	printf(" +---+---+---+\n");
   	printf("1| %c | %c | %c |\n",galo[0][0],galo[0][1],galo[0][2]);
   	printf(" +---+---+---+\n");
   	printf("2| %c | %c | %c |\n",galo[1][0],galo[1][1],galo[1][2]);
   	printf(" +---+---+---+\n");
   	printf("3| %c | %c | %c |\n",galo[2][0],galo[2][1],galo[2][2]);
   	printf(" +---+---+---+\n");
}

void escolheJogada(char galo[][N], int jogador, int* pposicao) {
	if(jogador == 1) printf("\n|| Jogador 1 'X' ||\n");
	else printf("\n|| Jogador 2 'O' ||\n");
	do{
		printf("Posicao: ");
		scanf(" %d", pposicao);
	}while(galo[((*pposicao)-1)/N][((*pposicao)-1)%N] != '_');
	if(jogador == 1)
		galo[((*pposicao)-1)/N][((*pposicao)-1)%N] = 'X';
	else
		galo[((*pposicao)-1)/N][((*pposicao)-1)%N] = 'O';
	(*pposicao)++;
}

int verificaVencedor(char galo[][N]) { //falta isto
	for(int i = 0; i < N; i++){
		int contl = 0, contc = 0, contde = 0, contdd = 0;
		for(int j = 1; j < N; j++){
			if(galo[i][j] == galo[i][j-1] && galo[i][j] != '_') //linhas
				contl++;
			if(galo[j][i] == galo[j-1][i] && galo[j][i] != '_') //colunas
				contc++;
		}
		if(galo[1][1] == galo[0][0] && galo[2][2] == galo[1][1] && galo[1][1] != '_') //diagonal esquerda
			return 1;
		if(galo[1][1] == galo[0][2] && galo[2][0] == galo[1][1] && galo[1][1] != '_') //diagonal direita
			return 1;
		if(contl == 2 || contc == 2)
			return 1;
	}
	return 0;
}

void printaVencedor(int ganha, int jogador) {
	if(ganha && jogador == 1)
		printf("\n--Resultado Final--> Jogador 1 Ganhou 'X' ");
	else if(ganha && jogador == 2)
		printf("\n--Resultado Final--> Jogador 2 Ganhou 'O' ");
}

int main(void) {
	char galo[N][N];
	int jogador = 1, posicao=0, ganha = 0;

	iniciaTabuleiro(galo);
	for(int i = 0; i < N*N && ganha == 0; i++){
		escolheJogada(galo, jogador, &posicao);
		printaTabuleiro(galo);
		ganha = verificaVencedor(galo);
		printaVencedor(ganha, jogador);
		if(jogador == 2)
			jogador = 0;
		jogador++;
	}
	if(ganha == 0)printf("\n--Resultado Final--> Empate ' X O '");
	printaTabuleiro(galo);
}