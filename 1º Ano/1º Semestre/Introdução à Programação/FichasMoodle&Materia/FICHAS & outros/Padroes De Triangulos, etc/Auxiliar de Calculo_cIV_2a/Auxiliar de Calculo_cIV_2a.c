#include <stdio.h>

void main()

{
    int n ;
    printf("Qual é o resutado de 12 + 6: ");
    scanf("%d", &n);

    if(n!=18)
    printf("A resposta e %d\nO Resultado %d esta errado",12+6, n);
    else
    printf("Correto!\nO resultado %d esta certo",n);

    return 0;
}
