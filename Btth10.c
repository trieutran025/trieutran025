/* Bai 10: Nhap a,b,c(la cac so thuc khong am.Kiem tra xem co phai la
ba canh cua 1 tam giac hay khong */
#include<stdio.h>
int main(){
	float a,b,c;
	printf("Nhap canh a,b,c cua tam giac : ");scanf("%f%f%f",&a,&b,&c);
	if(a>0&&b>0&&c>0){
		if(a+b>c&&b+c>a&&a+c>b){
			printf("ba canh tao thanh mot tam giac \n");
		}
	else{
		printf("ba canh khong tao thanh mot tam  giac \n");
	}
	}
	else{
		printf("nhap so duong \n");
	}	
return 0;	
}