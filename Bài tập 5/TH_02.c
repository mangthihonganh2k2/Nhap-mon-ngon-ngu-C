#include<stdio.h>
int main()
{
    int b, n;
    long a; 
    a = 0;
    b = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);

    while(b <= n)
    {
        a = a + b;
        b++;
    }
    printf("\nTong 1 + 2 + ... + %d la %ld: ", n, a);
    return 0;
}
