#include<stdio.h>

int main()
{
    long n,m;
    
    scanf("%ld %ld",&n,&m);
    
    printf("%ld",n-m>0 ? n-m : m-n);
}