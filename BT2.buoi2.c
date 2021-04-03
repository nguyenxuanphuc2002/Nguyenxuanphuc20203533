#include <stdio.h>
#include <stdlib.h>
#define gd 3500

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b;
	float c,d;
	printf("Nhap vao don vi cong: ");
	scanf("%d",&a);
	printf("Thoi gian tieu thu: ");
	scanf("%d",&b);
	 printf("cong suat su dung: %.4f kWh \n chi phi dien hang thang: %.4f dong",c=a/b/1000, d=a/b/1000*30*24*gd);
	
	return 0;
}
