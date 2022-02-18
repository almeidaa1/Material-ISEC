#import <stdio.h>
void main()

{
    int lados,perimetro,a,t1,t2,area;

    printf("Numero de lados: ");
    scanf("%d",&lados);

    switch(lados){
    case 3:
        printf("Tamanho de um lado: ");
        scanf("%d",&t1);
        perimetro = t1*3;
        printf("Triangulo com %d de perimetro",perimetro);
        break;
    case 4:
        printf("Tamanho de um lado: ");
        scanf("%d",&t2);
        area = t2*t2;
        printf("Quadrado com %d area",area);
        break;
    }


}
