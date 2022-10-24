#include<stdio.h>

main()
{
    int m,n,sum=0,min;
    
    scanf("%d %d",&m,&n);
    
    int a=2,b=1;
    

        while(m<=n)
        {
            if(m==1) m=2;
            char df=1;
            for(int i=2;i<m;i++)
            {
                if(m%i==0) 
                {
                    df=0;
                    break;
                }
            }
            if(df==1)
            {
                if(b==1&&m!=1) 
                {
                    min=m;
                    b=0;
                }
                sum=sum+m;
            }
            m++;
        }

    if(sum==0||n==1) printf("-1");
    else printf("%d\n%d",sum,min);
}