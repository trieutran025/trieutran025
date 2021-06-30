#include <stdio.h>
#define PI 3.141592

int main() {
	float r; 
	printf("Nhap vao ban kinh r > 0: ");
	scanf("%f", &r);
	if(r >= 0) {
		float chuVi = 2 * PI * r;
		float dienTich = PI * r * r;
		printf("Chu vi = %f\nDien tich = %f\n", chuVi, dienTich);
	} else { 
		puts("Nhap ban kinh r > 0");
	}
	
	return 0;
} 