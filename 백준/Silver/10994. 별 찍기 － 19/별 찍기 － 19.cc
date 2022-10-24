#include<stdio.h>

char star[400][400];

void print(int x, int y, int n)
{
    if(n==1) 
    {
        star[x][y]='*';
        return;
    }
    for(int i=x;i<x+4*(n-1)+1;i++)
    {
        star[i][y]='*';
        star[i][y+4*(n-1)]='*';
    }
    for(int i=y;i<y+4*(n-1)+1;i++)
    {
        star[x][i]='*';
        star[x+4*(n-1)][i]='*';
    }
    print(x+2,y+2,n-1);
}
int main()
{
    int n;
    
    scanf("%d",&n);
    
    for(int i=0;i<4*(n-1)+1;i++) 
    {
        for(int j=0;j<4*(n-1)+1;j++)
        {
            star[i][j]=' ';
        }
    }
    print(0,0,n);
    for(int i=0;i<4*(n-1)+1;i++) 
    {
        for(int j=0;j<4*(n-1)+1;j++)
        {
            printf("%c",star[i][j]);
        }
        printf("\n");
    }
}