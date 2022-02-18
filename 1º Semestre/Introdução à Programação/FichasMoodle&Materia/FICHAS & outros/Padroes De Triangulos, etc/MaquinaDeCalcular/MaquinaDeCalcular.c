#include <stdio.h>
void main()

{
char op;
float a,b,total;

printf("Conta: ");
scanf("%f %c %f", &a, &op, &b);


if(op=='+')
    printf("%.1f %c %.1f = %.1f",a,op,b,a + b);
else if (op=='-')
    printf("%.1f %c %.1f = %.1f",a,op,b,a - b);
else if (op=='*')
    printf("%.1f %c %.1f = %.1f",a,op,b,a * b);
else if (op=='/' && b!=0)
    printf("%.1f %c %.1f = %.1f\n" ,a,op,b,a / b);
else
    printf("Funçao Inválida");


return 0;

}
