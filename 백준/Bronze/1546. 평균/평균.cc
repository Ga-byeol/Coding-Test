#include<stdio.h>

main()
{
    int n,max=0,score,sum=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score);
        if(max<score) max=score;
        sum=sum+score;
    }
    printf("%.2f",((float)sum/max*100/n));
}