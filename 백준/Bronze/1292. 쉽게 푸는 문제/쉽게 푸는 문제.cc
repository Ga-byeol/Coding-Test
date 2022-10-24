#include<stdio.h>

main()
{
    int a,b,cnt=1,sum=0;
    
    scanf("%d %d",&a,&b);
    
    for(int i=1;i<=cnt;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            if(a<=cnt&&cnt<=b) sum=sum+i;
            cnt++;
        }
        if(cnt>b) cnt=0;
    }
    printf("%d",sum);
}