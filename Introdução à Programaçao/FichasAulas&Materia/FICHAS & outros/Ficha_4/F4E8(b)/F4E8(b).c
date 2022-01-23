#include <stdio.h>

void main()
{
    int cat = 0, divisor = 2,resultado,m,n;  //m -> limite inferior    n -> limite inferior  cat -> categoria em funçao da soma resultado da divisao
    printf("Limite inferior: ");            // divisor -> numero pelo qual o n vai divir
    scanf("%d",&m);
    printf("Limite superior: ");
    scanf("%d",&n);
    while(m<=n)
    {
        divisor=2;
        cat=0;
        while(divisor <= m)
        {

            if (m%divisor == 0)
            {
                resultado = m/divisor;
                cat += resultado;
                divisor++;
            }
            else
            {
                divisor++;
            }
        }
        if (cat == m)
        {
            printf(" %d e um numero perfeito\n",m);
        }
        else if (cat < m)
        {
            printf(" %d e um numero abundante\n",m);
        }
        else
        {
            printf(" %d e um numero reduzido\n",m);
        }
       m++;
    }
}

