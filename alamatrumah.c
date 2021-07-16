#include <stdio.h>

void main() {
	char alamat1 [15];
	char alamat2 [15];
	char alamat3 [15];
	
	printf("alamat pertama: ");
	scanf("%s", alamat1);
	printf("alamat kedua: ");
	scanf("%s", alamat2);
	printf("alamat ketiga: ");
	scanf("%s", alamat3);
	printf("alamat rumah anda berada di %s %s %s", alamat1, alamat2, alamat3);

}