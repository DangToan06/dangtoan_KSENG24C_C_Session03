#include <stdio.h>

int main(){
	// B1: khai bao bien
	float toan, van, anh;
	printf("Nhap diem toan, van, anh: ");
	// B2: Nhap diem toan van anh
	scanf("%f %f %f", &toan, &van, &anh);
	// B3: Tinh tong diem va diem trung binh
	float tongDiem = toan + van + anh;
	float diemTB = tongDiem/3;
	// B4: In ra ket qua
	printf("tong diem là %.2f \ndiem trung binh la: %.2f", tongDiem, diemTB);
	// B5: Ket thuc chuong trinh
	return 0;
}

