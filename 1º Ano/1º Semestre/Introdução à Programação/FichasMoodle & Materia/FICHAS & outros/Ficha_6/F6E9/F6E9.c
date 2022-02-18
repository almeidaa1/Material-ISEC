#include <stdio.h>

void func(char VC[], int VI[], int n);

void main() {
	int n;
	printf("Tamanho dos arrays: ");
	scanf("%d", &n);
	char VC[n];
	int VI[n];
	for(int i = 0; i < n; i++) {
		printf("VC[%d]: ", i);
		scanf(" %c", &VC[i]);
		printf("VI[%d]: ", i);
		scanf("%d", &VI[i]);
	}
	func(VC, VI, n);
}

void func(char VC[], int VI[], int n) {
    printf("\n");
	for(int i = 0; i < n; i++) {
		for(int x = 0; x < VI[i]; x++) {
            printf("%c", VC[i]);
		}
		printf("\n");
	}
}
