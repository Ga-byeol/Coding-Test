#include<stdio.h>

main()
{
    int n,a,b,sum=0;
    
    scanf("%d",&n);
    
    while(1)
    {
          if(n%5==0||n<0) break;
        n=n-3;
        
        sum++;
        
        
    }
    
    sum=sum+n/5;
    
    if(n%5==0) printf("%d",sum);
    
    else printf("-1");
}