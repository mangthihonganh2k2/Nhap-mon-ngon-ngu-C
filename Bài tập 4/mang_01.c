#include <stdio.h>
 
int main()
{
	int a[4] = {3, 5, 7, 2};
	int h, tong = 0;
	 
	for( h = 0; h <= 3; ++h ) {
		 tong += a[h];
	 printf("%d\n", a[h]);
	 }
    
    printf(" tong = %d", tong);
    
	   return 0;
}

