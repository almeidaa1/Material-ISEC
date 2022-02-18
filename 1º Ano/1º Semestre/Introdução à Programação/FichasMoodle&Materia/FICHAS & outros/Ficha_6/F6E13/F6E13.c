#include <stdio.h>
#include <time.h>
#define TAM 10

void main()
{
    int a[TAM][TAM], i, j, cont = 0;

    srand((unsigned) time (NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            a[i][j] = rand() % TAM;
            printf("%d", a[i][j]);
            if (a[i][j] == 0) {
                cont++;
            }
        }
        printf("\n");
    }
    printf("\n Numero de Zeros = %d", cont);
}
