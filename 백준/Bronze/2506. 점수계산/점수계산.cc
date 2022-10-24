#include<stdio.h>

main()
{
    int n,a,cnt=0,score=0;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1) cnt++;
        else cnt=0;
        score=score+cnt;
    }
    printf("%d",score);
}