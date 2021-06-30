/* Bai 4: Nhap vao hai so a,b so sanh xem so nao lon hon ; so nao nho hon
 hay hai so bang nhau  */
#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Nhap vao a,b ");scanf("%d%d",&a,&b);
	if(a>b){
		int max = a ;
		printf("Gia tri max = %d \n ",a);
		int min = b;
		printf("gia tri min = %d \n",b);
	}
	 else if(b>a){
		int max =b;
		printf("Gia tri max =%d \n",b);
		int min= a;
		printf("gia tri min = %d \n",a);
	 }
	else{
		printf(" a va b bang nhau");
	}
return 0;	
}