/// Exame Epoca Recurso 2016 ///

/// Exercicio 2(a) e 2(b) /// ( 4 + 3 valores )

#include <stdio.h>

float a_pagar(int horaEntrada, int minEntrada, int horaSaida, int minSaida);

void main(void) {
	int horaEntrada, horaSaida, minEntrada, minSaida;
	do{
		printf("Entrada (formato hh:mm) ");
		scanf("%d:%d", &horaEntrada, &minEntrada);
	}while(horaEntrada >= 24 || horaEntrada < 0 || minEntrada < 0 || minEntrada > 59);
	do{
		printf("Saida (formato hh:mm) ");
		scanf("%d:%d", &horaSaida, &minSaida);
	}while(horaSaida < horaEntrada || horaSaida >= 24 || horaSaida < 0 && minSaida < 0 || minSaida > 59);
	printf("Total a pagar: %.2f", a_pagar(horaEntrada, minEntrada, horaSaida, minSaida));
}

float a_pagar(int horaEntrada, int minEntrada, int horaSaida, int minSaida){
	int minutos, periodos;
	float preco;

	minutos = ((horaSaida - horaEntrada)*60) + (minSaida-minEntrada);
	periodos = minutos/15;
	if(minutos % 15)
		periodos++;
	if(periodos > 1 && periodos <= 8)
		preco = 0.35 + ((periodos-1)*0.25);
	else if(periodos > 8){
		preco = 0.35 + 7*0.25 + ((periodos-8)*0.20);
		if(preco > 4)
			preco = 4;
	}
	else if(periodos == 1)
		preco = 0.35;
	return preco;
} // O preço total a pagar que lá está no enunciado não devia ser 2.80 euros mas sim 2.90 euros //


/// Exercicio 3 ///

#include <stdio.h>
#include <string.h>
#define TAMFRASE 81
#define TAMPALAVRA 9

int UltimaPalavra(char frase[],char palavra[],int dmax);

void main()
{
	char frase[TAMFRASE],ultima[TAMPALAVRA];
	int p=0;

	printf("Indique uma frase: ");
	gets(frase);

	p= UltimaPalavra(frase,ultima,TAMPALAVRA-1);

	if (p>=0)
		printf("Ultima palavra: %s, que comeca na posicao %d da frase\n",ultima,p);
	else
		printf("Nao foi possivel definir a ultima palavra\n");
}

int UltimaPalavra(char frase[],char palavra[],int dmax){

int i = strlen(frase)-1, posicao, j = 0;

if(strlen(frase) == 0)
	return -1;
else
	while(frase[i] == ' ')
		i--;
	while(frase[i] != ' ')
		i--;
	i++;
	posicao = i+1;
	while(frase[i] != ' ' && frase[i] != '\0') {
		palavra[j] = frase[i];
		j++;
		i++;
	}
	palavra[j] = '\0';
	if(strlen(palavra) > dmax)
		return -1;
	return posicao;
}
