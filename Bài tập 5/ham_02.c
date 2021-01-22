#include<stdio.h>
int kiem_tra_am_duong(int n);
 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  if(kiem_tra_am_duong(n) > 0)
      printf("n la so nguyen duong ");
  else if (kiem_tra_am_duong(n) < 0)
    printf("n la so nguyen am");
  else
    printf("n = 0");
  return 0;
}
int kiem_tra_am_duong(int n){
int kiem_tra_am_duong;
return n;
}
