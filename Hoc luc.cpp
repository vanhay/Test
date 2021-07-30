#include<stdio.h>
int main() {
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>10 || b>10 ||c>10) {
					printf("Diem nhap khong hop le");
				} else {
	if (a>=8 && b>=8 && c>=8) {
		printf("Hoc luc gioi");
	} else {
		if (a>=6.5 && b>=6.5 && c>=6.5) {
			printf("Hoc luc kha");
		} else {
			if (a>=5 && b>=5 && c>=5) {
				printf("Hoc luc trung binh");
			} else {
				if (a<5 && b<5 && c<5){
					printf("Hoc sinh yeu");
				}
				}
			}
		}
	}
	return 0;
}
