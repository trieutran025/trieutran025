#include <stdio.h>
int main() {
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	float thuong = 0;
	printf("%d + %d = %d\n", a, b, tong);
	printf("%d - %d = %d\n", a, b, hieu);
	printf("%d * %d = %d\n", a, b, tich);
	if(b == 0) {
		puts("Khong chia duoc");
	} else {
		thuong = (float)a / b;
		printf("%d / %d = %f\n", a, b, thuong);
	}
	
	return 0;
} 