#include<stdio.h>


int sum(int a, int b, int c);
int main(){
  int a = 4, b = 2, c = 6;
  printf("a + b + c = %d", sum(a, b, c));
  	return 0;
}

  int sum(int a, int b, int c){
  return a + b + c ;
}
