#include<stdio.h>

main()
{
    int T,k,n;
    scanf("%d",&T);

    int apart[16][16]={0};
        
    for(int i=1;i<16;i++)
    {
        apart[0][i]=i;
        apart[i][1]=1;
    }
    for(int i=1;i<16;i++)
    {
        for(int j=1;j<16;j++)
        {
                apart[i][j]=apart[i-1][j]+apart[i][j-1];
        }
    }
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&k,&n);
        printf("%d\n",apart[k][n]);
    }
}