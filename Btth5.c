/* Bai 5:Hay nap 4 so nguyen a,b,c,d.Tim GTLN cua chung va gan gia tri
lon do cho bien max.In gia tri max ra Man hinh.Trong truong hop 4 so do
bang nhau thi in ra : ko co so lon nhat .*/


#include<stdio.h>
int main(){
 int a,b,c,d;
 printf("Nhap a,b,c,d");scanf("%d%d%d%d",&a,&b,&c,&d);
 int max =(a>b)? a:b;
     max =(max>c)? max:c;
     max =(max>d)? max:d;
 if(a==b&&b==c&&c==d){
 	printf("khong co gia tri max \n");
 }
 else{
 	printf("gia tri max = %d ",max);
 }   
return 0;
}