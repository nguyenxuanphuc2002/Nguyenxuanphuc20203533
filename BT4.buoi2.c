#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c;
	printf("Nhap 1 so nguyen :");
	scanf("%d",&a);
	printf("nhap them 1 so khac:");
	scanf("%d",&b);
	printf("so do tro thanh: %d",c=a&~(1<<(b-1)));
	return 0;
}
