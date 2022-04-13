#include <stdio.h>

int comuns(const int *a, int tamA, const int *b, int tamB){

    int total = 0;

    for(int i = 0; i < tamA; i++){

        int conta = 0;
        for(int j = 0; j < tamB; j++)
            conta += *(a+i) == *(b+j);
        if(conta) total++;
    }
    
    return total;
}

int main(void) {
    const int a[6] = {1, 3, 2, 6, 5, 4};
    const int b[9] = {9, 5, 3, 3, 1, 4, 8, 7, 23};
    printf("%d\n", comuns(a, 6, b, 9));
}