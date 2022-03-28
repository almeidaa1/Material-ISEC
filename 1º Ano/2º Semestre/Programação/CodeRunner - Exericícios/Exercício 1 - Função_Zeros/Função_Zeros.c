// #include <stdio.h>

void zeros(int *v, int tam){
    int x = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] == 0 && i != 0){
            int j = i;
            do{
                v[j] = v[j-1];
                j--;
            }while(j > x);
            x++;
            v[j] = 0;
        }
    }
}

// int main(void) {
//     int n = 11;
//     int a[11] = {-4,2,0,3,4,10,0,0,0,7,0};
//     zeros(a, n);
//     for(int i = 0; i < 11; i++)
//         printf("%d ", a[i]);
// }
