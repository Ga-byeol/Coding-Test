#include<stdio.h>

main()
{
    int n,m,k,f,y;
    scanf("%d %d %d",&n,&m,&k);
    
    int map[n][m];
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<m;j++)
        {
            if(i==0) map[i][j]=1;
            else if(j==0) map[i][j]=1;
            else map[i][j]=map[i-1][j]+map[i][j-1];
        }
    }
    
    if(k==0) 
    {
        printf("%d",map[n-1][m-1]);
        return 0;
    }
    y=k%m;
    int x = k/m > 0 ? k/m : 0;
    if(k%m==0) 
    {
        printf("%d",map[x-1][m-1]);
        return 0;
    }
    
    f=map[x][y-1];
    map[x][y-1]=1;
    
    for(int i=x;i<n;i++)
    {
        int cnt=0;
        for(int j=y-1;j<m;j++)
        {
            if(i==x) map[i][j]=1;
            else if(j==y-1) map[i][j]=1;
            else map[i][j]=map[i-1][j]+map[i][j-1];
        }
    }
    printf("%d",f*map[n-1][m-1]);
}