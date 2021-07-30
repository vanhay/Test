#include<stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	for (int i=2; i<=a; i++) {
		if (a==2) {
			printf("N=%d la so nguyen to",a);
		}	 else  {
		if (a%i==0) {
			printf("N=%d khong phai la so nguyen to",a);
		} else {
			printf("N=%d la so nguyen to",a);
		}
	}
		return 0;
	}
}
