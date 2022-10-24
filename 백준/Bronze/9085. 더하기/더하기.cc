#include<stdio.h>

main()
{
    int t,n,num;
    
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int sum=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&num);
            sum=sum+num;
        }
        printf("%d\n",sum);
    }
}