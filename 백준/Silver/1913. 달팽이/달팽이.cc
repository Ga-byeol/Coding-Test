#include<stdio.h>
int arr[1000][1000];
main()
{
    int n,find_n;
    scanf("%d %d",&n,&find_n);
    int num=n*n,x,y,nx=0,ny=1,dir=1,a=n;
    
    while(1)
    {
        for(int i=0;i<n;i++)
        {
            nx=nx+dir;
            if(num==find_n)
            {
                x=nx;
                y=ny;
            }
            arr[nx][ny] = num--;
        }
        n--;
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            ny=ny+dir;
            if(num==find_n)
            {
                x=nx;
                y=ny;
            }
            arr[nx][ny] = num--;
        }
        dir*=-1;
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("%d %d",x,y);
}