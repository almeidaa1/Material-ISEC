
/// Exame Epoca Normal 2016 ///

/// Exercicio 2(a) e 2(b) /// ( 2.5 + 4 valores )

#include <stdio.h>

float media_final(int valor, int valido);

void main(void) {
	float valor;
	int valido;
	while(valido) {
		do{
			printf("Valor: ");
			scanf("%f",&valor);
		}while(valor < 0 || valor >= 10);
		printf("Quer adicionar o numero para a media (0 se sim | 1 se nao) : ");
		scanf("%d", &valido);
		if(valido)
			media_final(valor, valido);
		else
			printf("A media vai ser de %.2f", media_final(valor, valido));
	}
}

float media_final(int valor, int valido) {

    static float media = 0;
    static int cont = 0;

	if(valido){
		media+=valor;
		cont++;
		return 0;
	}
	else
		return media/cont;
}

/// Exercicio 3 | V /// ( 5.5 valores )

#include <stdio.h>
#define TAMFRASE 50
#define TAMFIM 75

int func(char st1[], char st2[], char stfim[], int tamf);
int strlen(char str[]);

void main()
{
	char f1[TAMFRASE], f2[TAMFRASE], final[TAMFIM]="";

	printf("Indique a frase 1: ");
	gets(f1);
	printf("Indique a frase 2: ");
	gets(f2);
	if(func(f1, f2, final, TAMFIM))
		printf("Frase modificada:\n%s\n",final);
	else
		printf("Frase nao modificada!\n");
}

int func(char st1[], char st2[], char stfim[], int tamf) {
	int tam1, tam2, maior, i, cont = 0, x = 0;

	tam1 = strlen(st1);
	tam2 = strlen(st2);
	if(tam1 >= tam2)
		maior = tam1;
	else
		maior = tam2;
	for(i = 0; i < maior; i++) {
		cont++;
		if(cont <= tam1){
			stfim[x] = st1[i];
			x++;
		}
		if(cont <= tam2){
			stfim[x] = st2[i];
			x++;
		}
	}
	if(tam1+tam2 <= tamf && tam1+tam2 > maior)
		return 1;
	return 0;
}

// Funçao à parte, não consta no exercício para a fazer ( conta o numero de caracteres da frase passada como argumento )
int strlen(char str[]) {
	int i = 0;
	while(str[i]!='\0')
		i++;
	return i;
}
