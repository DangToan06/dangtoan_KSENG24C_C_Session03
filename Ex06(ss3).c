#include <stdio.h>

int main(){
	float canh, chieuCao;
	printf("Vui long nhap canh v� chieu cao hinh tam giac: ");
	scanf("%f %f", &canh, &chieuCao);
	float dienTich = (canh*chieuCao)/2;
	printf("dien tich hinh tam giac la: %.1f", dienTich);

	return 0;
}

