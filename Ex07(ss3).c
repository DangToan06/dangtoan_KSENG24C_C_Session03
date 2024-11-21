#include <stdio.h>

int main(){
	// B1: Khai bao bien va nhap xuat
	int n, a, b, c, d;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &n);
	// B2: kiem tra xem so do co phai so co 4 chu so khong neu khong thi bat nhap lai
	while(1000 > n || n > 9999){
		printf("So ban nhap khong thoa man hay nhap lai: ");
		scanf("%d", &n);
	}
	// B3: xu ly tach cac so ra va cong lai voi nhau
	a = n / 1000;
	int temp = n % 1000;
	b = temp / 100;
	temp = temp % 100;
	c = temp / 10;
	d = temp % 10;
	int tong = a + b + c + d;
	// B4: In ra ket qua
	printf("tong cac chu so tren la: %d", tong);
	//B5: ket thuc
	return 0;
}

