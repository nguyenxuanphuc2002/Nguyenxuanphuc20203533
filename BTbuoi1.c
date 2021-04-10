#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	float b;
	
	printf("Nhap chieu cao cua ban :");
	scanf("%d",&a);
	printf("Vay chieu cao cua ban la: %d cm\nVay chieu cao cua ban la: %.2f m",a,b=(float) a/100);
	
	return 0;
}
