#include<stdio.h>

int main(){
	//khai bao bien a va bien b 
	int a ,b ;
	printf("nhap so a = ",a);
	scanf("%d", &a);
	printf("nhap so b = ",b);
	scanf("%d", &b);

	if (a > b){
		   printf("a>b",a,b);
   }else if(a = b){
		printf("a==b",a,b);
	}else if(a < b){
         printf("a<b",a,b);
    }
	return 0;
}
