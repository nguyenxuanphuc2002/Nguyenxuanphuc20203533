#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float r,d,CV,DT;
	printf("nhap mot con so lam ban kinh r=");
	scanf("%f",&r);
	printf("Voi ban kinh %.2f thi: \n Do dai duong kinh : %.2f \n Chu vi hinh tron: %.2f \n Dien tich hinh tron : %.2f ",r,d=2*r,CV=2*pi*r,DT=r*r*pi);
	return 0;
}
