/* Nao sabia se é permitido o uso da biblioteca string.h por isso nao usei (com a biblioteca seria um pouco mais facil) */

#include <stdio.h>
#define TAMFRASE 80
#define TAMPAL 60

int func(char frase[], char palavra[], int tamf, int tamp);

int main(void)
{
	char f[TAMFRASE], p[TAMPAL];

	printf ("Indique frase: ");
	gets(f);
	printf("Indique palavra:");
	gets(p);

	if(func(f,p,TAMFRASE,TAMPAL))
		printf("Frase modificada:\n%s\n",f);
	else
		printf("Frase NAO modificada!\n");
}

int func(char frase[], char palavra[], int tamf, int tamp) {

	int i = 0, cont1 = 0, cont2 = 0, x = 0, j;

		while(frase[i] != '\0'){
			i++;
			cont2++;
		}
		i--;
		while(frase[i] == ' ')
			i--;
		while(frase[i] != ' ' && i != -1)
			i--;
		i++;
		for(int x=0; palavra[x] != '\0'; x++)
			cont1++;
		for(j = i; j <= i + cont1; j++, x++)
			frase[j] = palavra[x];
		if(cont1 + cont2 <= tamf)
			return 1;
		else
			return 0;
}
