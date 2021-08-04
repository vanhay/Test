#include <stdio.h>

int main(){
 float SoDien, TienDien;
 int bac1=1000, bac2=1300, bac3=1500, bac4=1800, bac5=2000, bac6=2500;
 printf("Nhap vao so dien: ");
 scanf("%f",&SoDien);
 if(SoDien<0){
 printf("\nSo dien nhap khong hop le\n");
 }else if(SoDien<=50){
  TienDien=SoDien*bac1;
  printf("\ n%.1f VND",TienDien);
 }else if(SoDien<=100){
  TienDien=50*bac1+((SoDien-50)*bac2);
  printf("\ %.1f VND",TienDien);
 }else if(SoDien<=200){
  TienDien=50*bac1+(50*bac2)+((SoDien-100)*bac3);
  printf("\ %.1f VND",TienDien);
 }else if(SoDien<=300){
  TienDien=50*bac1+(50*bac2)+(100*bac3)+((SoDien-200)*bac4);
  printf("\n %.1f VND",TienDien);
 }else if(SoDien<=400){
  TienDien=50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+((SoDien-300)*bac5);
  printf("\n %.1f VND",TienDien);
 }else if(SoDien>400){
  TienDien=50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+(100*bac5)+((SoDien-400)*bac6);
  printf("\n %.1f VND",TienDien);
 }
 return 0;
}

