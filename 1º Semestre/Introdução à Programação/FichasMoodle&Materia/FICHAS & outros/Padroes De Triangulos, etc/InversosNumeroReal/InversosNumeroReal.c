#include <stdio.h>

float main()

{
    float n, total;

    printf("Numero:");
    scanf("%f", &n);

    if(n!=0){
    total = 1/n;
    printf("O inverso de %5.4f é %5.4f\n",n,total);
    }
    printf("XOO");
    return 0;


}
