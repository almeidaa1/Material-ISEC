#include <stdio.h>

void linha()
{
    int i;

    for(i=1;i<=20;i++)
        putchar('*');
    putchar('\n');
}

void main()
{
    /* Numeros de 1 a 5*/

    int n;

    linha();
    printf("Numero de 1 a 10\n");
    linha();
    for(n=1;n<=5;n++)
        printf("%d\n",n);

    /*Numero de 5 a 10 com ciclo While*/

    n=5;
    while(n<10){
        n++;
        printf("%d\n",n);
    }


    linha();



}
