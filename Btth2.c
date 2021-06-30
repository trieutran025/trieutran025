/*Bai 2: Nhap vao mot so nguyen n,hay cho biet so do
am hay duong va chan hay le.Moi Kl tren 1 dong. */

#include<stdio.h>
int main() {
	int n;
	printf("Nhap n :"); scanf("%d", &n);
	// kiem tra n la am hay duong
	if (n > 0) {
		printf("%d la so duong", n);
	}
	else if (n < 0) {
		printf("%d la so am ", n);
	}
	else {
		printf("%d khong am,khong duong", n);
	}
	printf("\n\n");//cach dong
	//Kiem tra n chan hay le
	if (n % 2 != 0) {
		printf("%d la so le\n", n);
	}
	else {
		printf("%d la so chan\n", n);
	}
	return 0;
}