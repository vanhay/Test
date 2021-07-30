#include<stdio.h>
int main() {
	double a;
	scanf("%lf",&a);
	if (a<0) {
		printf("0 VND");
	} else {
		if (a<=200000000) {
			printf("%f VND",a*0.03);
		} else {
			if (a<=500000000) {
				printf("%f VND",a*0.05);
			} else {
				if (a>1000000000) {
					printf("%f VND",a*0.1);
				}
			}
		}
		}
		return 0;
	}
	

