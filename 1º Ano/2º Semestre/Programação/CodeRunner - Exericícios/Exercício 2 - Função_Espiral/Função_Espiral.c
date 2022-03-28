#include <stdio.h>

void printEspiral(int dim, int mat[][dim]){
    int i;
    for(int x = 0; x < dim-x; x++){
        for(i = x; i < dim-(x+1); i++) {
            for(int j = x; j < dim-x; j++){
                if(i > x)
                    j = dim - (x+1);
                printf("%d ", mat[i][j]);
            }
        }
        for(; i > x; i--){
            for(int j = dim-(x+1); j >= x; j--){
                if(i < dim - (x+1))
                    j = x;
                printf("%d ", mat[i][j]);
            }
        }
    }
    if(dim % 2 != 0)
        printf("%d ", mat[dim/2][dim/2]);
}

int main(void){
    // int mat[5][5] = {{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30},{31,32,33,34,35}};
    // int mat[4][4] = {{10,11,12,13},{14,15,16,17},{18,19,20,21},{22,23,24,25}};
    // int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat[6][6] = {{11,12,13,14,15,16},{16,17,18,19,20,21},{21,22,23,24,25,22},{26,27,28,29,30,23},{31,32,33,34,35,36},{37,38,39,40,41,42}};
    printEspiral(6, mat);
    printf("\n\n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}