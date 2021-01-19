#include<stdio.h>
 int main(){
 
 int n;
 printf("Nhap n = ");
 	scanf("%d", &n);
 	//tao namg a kich thuoc n
 	int a[n];
   //nhap n phan tu cua mang a tu ban phim
   for(int i = 0 ;i < n; i++){
     printf("nhap phan tu thu %d",i + 1);
     scanf("%d", &a[i]);
     printf("\n");
   }
   printf("mang a:");
   for(int i = 0 ;i < n; i++){
     printf("%d",a[i]);
     
   }
    int tong = 0;
    for(int i = 0; i <=n; i++){	
	     tong += a[i];
    	}
    	printf("\ntong cac phan tu cua mang la %d", tong);
    
    return 0;
}
 
