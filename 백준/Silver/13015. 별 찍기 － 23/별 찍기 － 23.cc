#include<stdio.h>
int midspace(int n)
{
    int space=1;
    if(n==2) return 1;
    else if(n==1) return 0;
    for(int i=2;i<n;i++)space+=2;
    
    return space;
}
void print(int a,int b,int n)
{
    for(int i=0;i<a;i++) printf(" ");
    printf("*");
    for(int i=2;i<n;i++) printf(" ");
    printf("*");
    for(int i=0;i<midspace(b);i++) printf(" ");
    
    if(b!=1)
    {
        printf("*");
        for(int i=2;i<n;i++) printf(" ");
    
        printf("*");
        printf("\n");
    }
    else {
        for(int i=2;i<n;i++) printf(" ");
        printf("*");
    }
}
main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    for(int i=0;i<n;i++) printf("*");
    for(int i=0;i<midspace(m);i++) printf(" ");
    for(int i=0;i<n;i++) printf("*");
    printf("\n");
    
    for(int i=1;i<n;i++) print(i,n-i,n);
    printf("\n");
    for(int i=2;i<n;i++) print(n-i,i,n);
    
    for(int i=0;i<n;i++) printf("*");
    for(int i=0;i<midspace(m);i++) printf(" ");
    for(int i=0;i<n;i++) printf("*");
}