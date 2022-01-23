/// Problema : ///

/*
a) Uma funçao que recebe como argumentos 2 numeros inteiros positivos e que devolva o m.d.c (maximo divisor comum) desses numeros

b) Desenvolva um Programa que pe�a ao utilizador uma fra�ao na forma (n1/n2), e que mostre o sua fra�ao redutivel se possivel.
Depois peça ao utilizador se pretende continuar ou nao, o programa termina que for digitado n ou N e avan�a quando digita s ou S
*/

/// Alinea a ///

#include <stdio.h>

int mdcn (int n1, int n2)
{
    int mdc = 0, maior = 0;
    do
    {
        mdc++;
        if (n1 % mdc == 0 && n2 % mdc == 0)
        {
            if(mdc > maior)
            {
                maior = mdc;
            }
        }
    }while(mdc <= n1 || mdc <= n2);
    return maior;
}

/// Alinea B ///

void main()
{
    int n1, n2, mdc;
    char resposta;
    do
    {
       do
       {
           printf("Fracao no formato #/#: ");
           scanf("%d/%d",&n1,&n2);
       }while (n2 <= 0 || n1 <= 0);
       mdc = mdcn(n1, n2);
       if (n1 % mdc == 0 && n2 % mdc == 0 && mdc > 1)
       {
           n1 /= mdc;
           n2 /= mdc;
           printf("%d/%d = %d/%d\n",n1 * mdc, n2 * mdc, n1, n2);
       }
       else if (n1 % mdc != 0 || n2 % mdc != 0 || mdc == 1)
       {
           printf("Fracao nao irredutivel\n");
       }
       do
       {
           printf("Pretende continuar (s/n): ");
           scanf(" %c",&resposta);
       }while(resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N');
        printf("\n");
    }while(resposta == 's' || resposta == 'S');
}
