#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	long int a;
	long int b;
	long int c;
	long int d;
	printf("so ban muon nhap la : ");
	scanf("%d",&a);
	printf (" %d giay =%d gio  %d phut %d giay ",a,b=a/3600,c=a/60%60,d=a%60);
	
	return 0 ;

}
