#include<stdio.h>
#include<math.h>
int main() {
	double a,b,r,c,e,d,s,p;
	int n;
	printf("\n Nhap so 1 de tinh dien tich hinh tron\n Nhap so 2 de tinh dien tich hinh chu nhat\n Nhap so 3 de tinh dien tich cua tam giac\n  ");
	printf("Tuy chon: ");
	scanf("%d",&n);
	if (n == 1) {
	printf("Nhap ban kin: ");
	scanf("%lf",&r);
	s = r * r * 3.14;
	printf("Dien tich: %.2f", s);
	} else {
	if (n == 2) {
			printf("Nhap chieu dai:");
			scanf("%lf",&a);
			printf("\nNhap chieu rong:");
			scanf("%lf",&b);
			s=a*b;
			printf("Dien tich: %.2f",s);
		} else {
			if (n == 3) {
				printf("Nhap ba canh: ");
				scanf("%lf%lf%lf",&c,&e,&d);
				p=(c+e+d)/2;
				s = sqrt(p * (p-c) * (p-e) * (p-d));
				printf("Dien tich: %.2f",s);
			}
		}
	}
	return 0;
}
