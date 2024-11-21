#include <stdio.h>
#include <math.h>

int main(){
	// B1: khai bao bien
	const float PI = 3.14;
	float r;
	// B2: Nhap ban kinh hinh tron
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%f", &r);
	// B3: Tinh toan chu vi vaf dienj tich hinh tron
	float chuVi = 2*PI*r;
	float dienTich = PI*pow(r,2);
	// B4: In ra ket qua
	printf("chu vi hinh tron la %.2f\ndien tich hinh tron la %.2f", chuVi, dienTich);
	// B5: ket thuc

	return 0;
}

