#include <stdio.h>
#include <stdlib.h>
#define gd 3500

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a,b,c,d;
	printf("Nhap vao don vi cong: ");
	scanf("%f",&a);
	printf("Thoi gian tieu thu: ");
	scanf("%f",&b);
	 printf("cong suat su dung: %.2f kWh \n chi phi dien hang thang: %.2f dong",c=a/b/1000, d=a/b/1000*30*24*gd);
	
	return 0;
}
