#include <stdio.h>
#include <math.h>

int main(){
	const float PI = 3.14;
	float r;
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%f", &r);
	float chuVi = 2*PI*r;
	float dienTich = PI*pow(r,2);
	printf("chu vi hinh tron la %.2f\ndien tich hinh tron la %.2f", chuVi, dienTich);

	return 0;
}

