#include <stdio.h>

int main()

{
    int n, i, total;

    printf("Numero: ");
    scanf("%d", &n);


total = 1;
    for(i=n; i>=1; i--)
        total *= i;

    printf("O fatorial de %d é %d",n, total);
return 0;
}
