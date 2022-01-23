#include <stdio.h>
void main()

{
    int n, soma, digito;

    printf("Numero:");
    scanf("%d",&n);
    soma = 0;
    while(n>0)
    {
        digito = n%10;
        n /= 10;
        soma += digito;
    }
printf("A soma dos digitos = %d",soma);
}


