#include<stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	if (a<0) {
		printf("So dien dang nhap khong hop le");
	} else {
		if (a<=50) {
			printf("%d VND",a*1000);
		} else {
			if (a<=100) {
				printf("%d VND",a*1300);
			} else {
				if (a<=200) {
					printf("%d VND",a*1500);
				} else {
					if (a<=300) {
						printf("%d VND",a*1800);
					} else {
						if (a<=400) {
							printf("%d VND",a*2000);
						} else {
							printf("%d VND",a*2500);
						}
					}
				}
			}
		}
	}
	return 0;
}

