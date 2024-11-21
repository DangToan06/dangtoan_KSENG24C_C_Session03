#include <stdio.h>

int main(){
	float C, F;
	printf("Vui long nhap do Celsius: ");
	scanf("%f", &C);
	
	F = C * 9/5 + 32;
	
	printf("Doi sang do Fahrenheit la: %.2f", F);

	return 0;
}

