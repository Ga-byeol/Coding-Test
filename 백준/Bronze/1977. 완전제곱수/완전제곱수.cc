#include<stdio.h>

main()
{
    int M,N,sum=0,min=0;
    scanf("%d %d",&M,&N);

    for(int i=M;i<=N;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            if(j*j==i)
            {
                if(min==0) min=i;
                sum=sum+i;
            }
        }
    }
    if(sum==0) printf("-1");
    else printf("%d\n%d",sum,min);
}