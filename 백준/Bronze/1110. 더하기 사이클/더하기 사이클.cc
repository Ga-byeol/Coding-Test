#include<stdio.h>

main()
{
    int s,n,count=0;
    
    scanf("%d",&s);
    
    n=s;
    
    while(1)
    {
        s=(s/10+s%10)%10+(s%10*10);
        
        count++;
        if(n==s) break;
    }
    
    printf("%d",count);
}