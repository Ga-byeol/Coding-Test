#include<stdio.h>

main()
{
    int n,std,cnt=0;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&std);
        if(i!=std) cnt++;
    }
    printf("%d",cnt);
}