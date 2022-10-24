#include<stdio.h>

main()
{
    int H,W,N,T,j;//j=호수 N=층
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d",&H,&W,&N);
        for(j=1;j<=W;j++)
        {
            N=N-H;
            if(N<=0) 
            {
                N=N+H;
                break;
            }
        }
        printf("%d%02d\n",N,j);
    }
}