#include <stdio.h>

int main() {
	float a, b;
	printf("Nhap hai canh a, b: ");
	scanf("%f%f", &a, &b);
	if(a > 0 && b > 0) {
		float chuVi = (a + b) * 2; 
		float dienTich = (a * b); 
		printf("Chu vi = %f\nDien tich = %f\n", chuVi, dienTich);
	} else {
		printf("Gia tri nhap vao khong hop le. Do dai khong the am");;
	}
	
	return 0;
} 