#include<stdio.h>

main()
{
    int num,sum=0,min=100;
    
    for(int i=0;i<7;i++)
    {
        scanf("%d",&num);
        if(num%2==1)
        {
            sum=sum+num;
            if(min>num) min=num;
        }
        
    }
    if(sum==0) printf("-1");
    else printf("%d\n%d",sum,min);
}