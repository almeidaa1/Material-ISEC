#include <stdio.h>

void grafico(char op[], int VI[], int tam);

void main() {
	int N, x = 0, ns = 0, nn = 0, ni = 0, na = 0, nx = 0;
	do{
		printf("Indique total de inqueritos: ");
		scanf("%d", &N);
	}while(N<=0);
	char op[N];
	for(int i = 1; i <= N; i++, x++) {
		printf("%d Inquerito\n", i);
		do {
			printf("Opcao escolhida (S/N/I/A/X): ");
			scanf(" %c", &op[x]);
			switch(op[x]){
				case 'S':ns++;break;
				case 'N':nn++;break;
				case 'I':ni++;break;
				case 'A':na++;break;
				case 'X':nx++;break;
			}
		}while(op[x] != 'S' && op[x] != 'N' && op[x] != 'I' && op[x] != 'A' && op[x] != 'X' );
	}
	printf("\n");
	if (ns > nn && ns > ni && ns > na && ns > nx) {
		printf("Segundo a sondagem a opcao vencedora sera a SIM.\n");
	}else if (nn > ns && nn > ni && nn > na && nn > nx) {
		printf("Segundo a sondagem a opcao vencedora sera NAO\n");
	}else if (ni > ns && ni > nn && ni > na && ni > nx) {
		printf("Segundo a sondagem a opcao vencedora sera INDECISO\n");
	}else if (na > ns && na > nn && na > ni && na > nx) {
		printf("Segundo a sondagem a opcao vencedora sera VOU-ME ABSTER\n");
	}

	char VC[]={'S', 'N', 'I', 'A', 'X'};
	int VI[] = {ns, nn, ni, na, nx};

	printf("\nResultado das varias opcaoes: \n\n");
	grafico(VC,VI, N);
}

void grafico(char VC[], int VI[], int tam) {
	for(int i = 0; i < 5; i++) {
        printf("%c:  ", VC[i]);
		for(int x = 0; x < VI[i]; x++) {
			printf("%c", VC[i]);
		}
		printf("\n");
	}
}
