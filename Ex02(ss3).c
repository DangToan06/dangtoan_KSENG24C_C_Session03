#include <stdio.h>

int main(){
	// B1: khai bao bien
	float C, F;
	// B2: nhap nhiet do can doi
	printf("Vui long nhap do Celsius: ");
	scanf("%f", &C);
	// B3: Xu ly doi tu tu do C sang do F
	F = C * 9/5 + 32;
	// 
	printf("Doi sang do Fahrenheit la: %.2f", F);

	return 0;
}

