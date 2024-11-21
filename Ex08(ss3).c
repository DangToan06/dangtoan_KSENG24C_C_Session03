#include <stdio.h>

int main(){
	int n, a, b, c, d;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &n);
	
	while(1000 > n || n > 9999){
		printf("So ban nhap khong thoa man hay nhap lai: ");
		scanf("%d", &n);
	}
	
	a = n / 1000;
	int temp = n % 1000;
	b = temp / 100;
	temp = temp % 100;
	c = temp / 10;
	d = temp % 10;
	int tong = d*1000 + c*100 + b*10 + a;
	
	printf("tong cac chu so tren la: %d", tong);
	
	return 0;
}
