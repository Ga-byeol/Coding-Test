#include<stdio.h>

char map[2500][2500];

void printstar(int n,int x,int y)
{
if(n == 1)
    {
        map[x][y]='*';
        return;
    }
    int div = n/3;
    for(int i=0; i<3; i++)for(int j=0; j<3; j++)if(i != 1 || j != 1)printstar(div,x+(i*div),y+(j*div));
}
main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)for(int j=0;j<n;j++) map[i][j]=' ';
    
    printstar(n,0,0);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) 
        {
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
}