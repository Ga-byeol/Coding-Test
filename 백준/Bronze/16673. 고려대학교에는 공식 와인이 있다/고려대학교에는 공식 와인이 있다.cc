#include<stdio.h>

main()
{
    int C,K,P,sum=0;
    scanf("%d %d %d",&C,&K,&P);
    
    for(int i=1;i<=C;i++)
    {
        sum = sum + K*i + P*i*i;
    }
    printf("%d",sum);
}