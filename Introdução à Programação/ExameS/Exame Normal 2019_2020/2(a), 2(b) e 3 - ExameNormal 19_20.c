
/// EXAME EPOCA NORMAL 19-20 ///

 																					/// EXERCICIO 2 ///

#include <stdio.h>

int PontoNoRetangulo(float vInfEsq[], float vSupDir[], float ponto[]); /// ALINEA 2( a ) ///

/// ALINEA 2( b ) ///

int main(void) {

 	char estu, part;
 	int cont = 0, angariado = 0, lancamento, valida, pontos = 0, maior = 0, validaponto;
 	float minmaxX[] = {0.0, 6.0}, minmaxY[] = {0.0, 3.0}, alvoX[] = {2.0, 4.0}, alvoY[] = {1.5, 2.5}, ponto[2];

 	do{
 		printf("Inserir participante (S/N)? ");
 		scanf(" %c", &part);
 		if(part == 'N' || part == 'n')
 			break;
 		lancamento = 0;
 		pontos = 0;
 		cont++;
 		printf("Participante %d\n", cont);
 		printf("E estudante ? (S/N): ");
 		scanf(" %c", &estu);
 		if(estu == 'S' || estu == 's')
 			angariado += 5;
 		else
 			angariado += 10;
 		do{
 			lancamento++;
 			do{
 				printf("Coordenadas do lancamento %d : ", lancamento);
 				scanf("%f %f", &ponto[0], &ponto[1]);
 				valida = PontoNoRetangulo(minmaxX, minmaxY, ponto);
 				if(valida == 0)
 					printf("Coordenadas invalidas \n");
 			}while(valida != 1);
 			validaponto = PontoNoRetangulo(alvoX, alvoY, ponto);
 			if(validaponto)
 				pontos++;
 		}while(lancamento < 3);
 		printf("Conseguiu %d pontos !\n", pontos);
 		if(pontos >= maior)
 			maior = cont;
 	}while(part != 'N' && part != 'n');
 	for(int i = 1; i <= 40; i++);
 		printf("-");
 	printf("\nTotal de participantes = %d\n", cont);
 	printf("Valor angariado ( euros ) = %d\n", angariado);
 	printf("Numero do participante vencer = %d\n", maior);
}

 /// ALINEA 2( a ) ///

 int PontoNoRetangulo(float vInfEsq[], float vSupDir[], float ponto[]) {
 	if(vInfEsq[0] < ponto[0] && vInfEsq[1] > ponto[1] && vSupDir[0] < ponto[0] && vSupDir[1] > ponto[1] )
 		return 1;
 	else
 		return 0;
 }


/// EXERCICIO 3 /// Para meter a funcionar comentar o exercicio 2
#include <stdio.h>
#include <string.h>
#define MAX 500

void maiorPalavra (char frase[], char palavra[]);

void main()
{
	char palavra[MAX];
	char fr[]= "Era uma linda coisa anticonstitucionalissimamente pois sim";

	maiorPalavra(fr, palavra);

	printf("\nMaior palavra de: %s => ", fr);
	puts(palavra);
}

void maiorPalavra (char frase[], char palavra[]) {
	int i, j, x;
	char maior[MAX];
	for (i = 0; frase[i] != '\0'; i++) {
		x = 0;
		for(j = i; frase[j] != ' '; j++, i++, x++){
			maior[x] = frase[j];
		}
		maior[x] = '\0';
		if(strlen(maior) > strlen(palavra)){
			for(x = 0; x <= strlen(maior); x++) {
				palavra[x] = maior[x];
			}
		}
	}

}
