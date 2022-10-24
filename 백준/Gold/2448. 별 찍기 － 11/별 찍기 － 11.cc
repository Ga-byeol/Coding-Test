#include<stdio.h>

char map[4000][7000];

void star(int n,int x,int y)
{
    if(n==3)
    {
        map[y][x] ='*';
        map[y+1][x-1] ='*';
        map[y+1][x+1] ='*';
        map[y+2][x-2] ='*';
        map[y+2][x-1] ='*';
        map[y+2][x] ='*';
        map[y+2][x+1] ='*';
        map[y+2][x+2] ='*';
        return;
    }
    star(n/2,x,y);
    star(n/2,x-n/2,y+n/2);
    star(n/2,x+n/2,y+n/2);
}
main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=2*n-1;j++) map[i][j]=' ';
    }
    star(n,n-1,0);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
}