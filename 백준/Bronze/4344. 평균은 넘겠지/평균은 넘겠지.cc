#include<stdio.h>

main()
{
    int c,n;
    
    scanf("%d",&c);
    
    while(c--)
    {
        int sum=0,cnt=0;
        scanf("%d",&n);
        char score[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&score[i]);
            sum+=score[i];
        }
        for(int i=0;i<n;i++)
        {
            if(score[i]>sum/n) cnt++;
        }
        printf("%.03f%%\n",(float)100*cnt/n);
    }
}