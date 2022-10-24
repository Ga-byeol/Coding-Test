#include<stdio.h>

main()
{
    int x,stick=64,sum=0,cnt=0;
    
    scanf("%d",&x);
    
    while(1)
    {
        if(x-stick>=0) 
        {
            x=x-stick;
            cnt++;
            if(x<=0) break;
        }
        stick/=2;
    }
    printf("%d",cnt);
}