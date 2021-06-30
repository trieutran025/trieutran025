#include <stdio.h>

int main() {
	float a, b, x; 
	printf("Nhap he so a, b: ");
	scanf("%f%f", &a, &b); 
	// bý?c 3
	if(a == 0 && b == 0) { 
		puts("Phuong trinh co vo so nghiem");
	} else if(a == 0 && b != 0) { 
		puts("Phuong trinh khong co nghiem");
	} else {
		x = -b / a;
		printf("Phuong trinh co nghiem la: x = %f\n", x);
	}
	
	return 0;
} 