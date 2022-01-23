#include <stdio.h>

void main()
{
	int tam, i, media = 0;

	printf("Tamanho do vetor: ");
	scanf("%d", &tam);
	int vetor[tam];
	for(i = 0; i < tam; i++)
	{
		printf("vetor[%d] = ", i);
		scanf("%d", &vetor[i]);
		media += vetor[i];
	}
	media /= tam;
	printf("\nMedia do vetor = %d\n", media);
	printf("\n|| VETOR CRIADO ( valores inferiores a media passam a nulos ) || \n");
	for(i = 0; i < tam; i++)
	{
		if(vetor[i] < media)
		{
			vetor[i] = 0;
		}
		printf("Vetor[%d] = %d\n", i, vetor[i]);
	}
}
