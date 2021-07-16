#include <stdio.h>

void main() {
	char umur1 [15];
	char umur2 [15];
	char umur3 [15];
	
	printf("umur pasien pertama: ");
	scanf("%s", umur1);
	printf("umur pasien kedua: ");
	scanf("%s", umur2);
	printf("umur pasien ketiga: ");
	scanf("%s", umur3);
	printf("umur pasien ketiganya adalah %s, %s, %s,", umur1, umur2, umur3);

}