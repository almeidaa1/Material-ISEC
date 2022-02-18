/*
-DADOS DE ENTRADA-
frase (string) : frase passada como argumento da funçao
num (inteiro) : numero de vezes que o caracter tem de aparecer na frase
car (caracter) : caracter a vereficar se aparece num vezes

-RESULTADOS PRETENDIDOS-
Devolver 1 se o caracter aparecer num vez, e 0 se nao
*/

																		/// ALINEA (a) ///
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 500

int numcar (char frase[], int num, char car);

int main(void) { // nao e necessario fazer a funçao main na alinea a

	char frase[MAX], car;
	int num;

	printf("Frase: \n");
	gets(frase);
	printf("Caracter a verificar: \n");
	scanf(" %c", &car);
	printf("Numero de vezes que o caracter aparece na frase: ");
	scanf("%d", &num);
	if(numcar(frase, num, car))
		printf("\nSIM, O caracter apareceu %d vezes na frase\n", num);
	else
		printf("\nNAO, O caracter NAO apareceu %d vezes na frase\n", num);
}

int numcar(char frase[], int num, char car) {
    int cont = 0;
    car = tolower(car);
	for(int i = 0; frase[i] != '\0'; i++){
		frase[i] = tolower(frase[i]);
		if(frase[i] == car)
			cont++;
	}
	if(cont == num)
		return 1;
	else
		return 0;
}
*/

																			///	ALINEA (b) ///

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int vezesCarater(int x, char c, char frase[])
{
    int i = 0, vezes = 1;
    c = tolower(c);

    do{
        while(tolower(frase[i]) != c && frase[i] != '\0')
            i++;
        i++;
        while(tolower(frase[i]) == c && frase[i] != '\0')
        {
            i++;
            vezes++;
        }

        if (vezes >= x)
            return 1;
        vezes = 1;
    }while(frase[i] != '\0');
    return 0;
}

void main()
{
    char c, string[MAX], maior[MAX];
    int vezes = 3;

    printf("Carater: ");
    scanf("%c",&c);
    fflush(stdin);

    printf("\n");

    do{
        printf("Introduza uma string: ");
        gets(string);

        if(string[0] == 'F' && string[1] == 'I' && string[2] == 'M' && strlen(string) == 3)
            break;
        if(vezesCarater(vezes,c,string) == 1 && strlen(string) >= strlen(maior))
            strcpy(maior, string);

    }while(string[0] != 'F' || string[1] != 'I' || string[2] != 'M' || strlen(string) != 3);

    if(maior[0] == '\0')
        printf("\nEm nenhuma das strings aparece o caracter %c, %d vezes consecutivas.\n", c, vezes);
    else
        printf("\nA maior string onde o caracter %c surgiu %d vezes consecutivas e: %s\n", c, vezes, maior);
}
