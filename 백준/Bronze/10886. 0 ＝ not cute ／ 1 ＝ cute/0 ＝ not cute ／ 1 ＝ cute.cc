#include<stdio.h>

main()
{
    int n,v,count=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v);
        if(v==1) count++;
        else count--;
    }
    if(count>0) printf("Junhee is cute!");
        else printf("Junhee is not cute!");
}