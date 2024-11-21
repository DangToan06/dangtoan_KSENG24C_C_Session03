#include <stdio.h>

int main(){
	float toan, van, anh;
	printf("Nhap diem toan, van, anh: ");
	scanf("%f %f %f", &toan, &van, &anh);
	float tongDiem = toan + van + anh;
	float diemTB = tongDiem/3;
	
	printf("tong diem là %.2f \ndiem trung binh la: %.2f", tongDiem, diemTB);

	return 0;
}

