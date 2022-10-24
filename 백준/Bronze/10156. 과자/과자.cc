#include<stdio.h>

main()
{
    int k,n,m;
    
    scanf("%d %d %d",&k,&n,&m);
    
    if(0>=m-k*n) printf("%d",(m-k*n)*-1);
    
    else printf("0");
}