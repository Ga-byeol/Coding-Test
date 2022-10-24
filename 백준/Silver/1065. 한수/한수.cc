#include<stdio.h>

main()
{
    int n,cnt=0,a,b,c;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {    
        
        a=i/100;
        c=i%10;
        b=((i%100)-c)/10;
        if(i<100) cnt++;
        else if(c-b==b-a) cnt++;
        
    }
    printf("%d",cnt);
}