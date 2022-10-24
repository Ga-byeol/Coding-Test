#include<stdio.h>

main()
{
 int a,b,n=0,m=0;
    
    for(int i=0;i<4;i++) 
    {
        scanf("%d %d",&a,&b);
        n=n+b-a;
        if(n>m) m=n;
    }
    printf("%d",m);
    
}