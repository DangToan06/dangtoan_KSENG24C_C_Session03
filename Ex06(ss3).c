#include <stdio.h>

int main(){
	// B1: Khai bao bien
	float canh, chieuCao;
	printf("Vui long nhap canh va chieu cao hinh tam giac: ");
	// B2: Nhap chieu cao va canh tam giac
	scanf("%f %f", &canh, &chieuCao);
	// B3: tinh dien tich tam giac
	float dienTich = (canh*chieuCao)/2;
	// B4: In ket qua ra man hinh
	printf("dien tich hinh tam giac la: %.1f", dienTich);
	// B5: Ket thuc chuong trinh

	return 0;
}

