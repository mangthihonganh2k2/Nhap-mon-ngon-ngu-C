#include<stdio.h>
 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
      if((n) > 0)
      printf("n la so nguyen duong ");

  else if ((n) < 0)
    printf("n la so nguyen âm");
  
  else 
    printf("n = 0");
  return 0;
}
