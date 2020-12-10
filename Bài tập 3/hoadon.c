#include <stdio.h>

int main(void) {
	//khai bao don gia va so luong
  int dongia, soluong, thanhtien;
  printf("nhap don gia cua hang duoc mua = ");
  scanf("%d", &dongia);
  printf("nhap so luong cua hang duoc mua = ");
   scanf("%d", &soluong);
   double(thanhtien = dongia * soluong);
   if (soluong >= 5){
   	thanhtien = (soluong * dongia)*0.75;
   	 printf("%d", thanhtien);
   	 }else {printf("%d", thanhtien);
   	 }
   getchar();
   return 0;
   }
  
