#include<stdio.h>

void print(int a,int b)
{
    for(int i=0;i<a;i++) printf("*");
    //for(int i=b;i>=1;i--) printf(" ");
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++) print(i,n-i);
    for(int i=0;i<n;i++) print(n-i,i);
}