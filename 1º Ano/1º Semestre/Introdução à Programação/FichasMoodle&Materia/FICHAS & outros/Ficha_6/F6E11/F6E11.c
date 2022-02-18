																		/// Alinea ( a ) ///

#include <stdio.h>

void acrescenta(char nip[], char car1, char car2);
int falsario(char nip[], char car1, char car2); // <- Da alinea ( b )

void main(void)
{

	char nip[] = {'P','T','1', '2','3','5','8','1','2' ,'3','0','0',' ',' ',' '};
	char car1, car2;
	printf("1 Caracter a adicionar: ");
	scanf(" %c", &car1);
	printf("2 Caracter a adicionar: ");
	scanf(" %c", &car2);
	acrescenta(nip, car1, car2);
	printf("%d",falsario(nip, car1, car2));
}

void acrescenta(char nip[], char car1, char car2) {
	for(int i = 13; i > 4; i--) {
		nip[i] = nip[i-2];
	}
	nip[3] = car1;
	nip[4] = car2;
    for(int i = 0; i < 15; i++) {
        printf("%c ", nip[i]);
	}
	printf("\n");
}
																		/// ALINEA ( b ) ///

int falsario(char nip[], char car1, char car2) {
	for(int i=0; i<=4; i++) {
		if(nip[i] == 'R') {
			for(int x=5; x<=8; x++) {
				if(nip[x]=='4' && nip[x+1] == '5' && nip[x+2] == '6') {
					return 1;
				}
			}
		}
	}
	return 0;
}
