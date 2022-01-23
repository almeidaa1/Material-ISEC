#include <stdio.h>

float Quadrado(float n);
void main()
{
float n;

do{
    printf("n para elevar ao quadrado: ");
    scanf("%f",&n);
        if (n!=0){
        printf("O %f^2 = %f\n", n, Quadrado(n));
        }
} while(n=!0);
}

float Quadrado(float n){
    float quad;
    quad = n*n;
    return quad;
}
