#include<stdio.h>

char map[3000][3000];

void star(int n,int x,int y)
{
    int time=1,m=1;
    
    for(int i=n;i>1;i--)
    {
        m*=2;
        time+=m*2;
    }
    
    if(n%2==0)
    {
        
        for(int i=0;i<time;i++) map[x][y++]='*';
        y--;
        for(int i=1;i<m*2-1;i++) map[x++][y--]='*';
        for(int i=1;i<m*2-1;i++) map[x--][y--]='*';
        if(n==2) 
        {
            map[x+1][y+2]='*';
            return;
        }
        star(n-1,x+(m*2-1)/2,y+(m*2)/2);
    }
    else if(n%2==1)
    {
        if(x==0)x=m*2-1;
        for(int i=0;i<time;i++) map[x][y++]='*';
        y--;
        for(int i=1;i<m*2-1;i++) map[x--][y--]='*';
        for(int i=1;i<m*2-1;i++) map[x++][y--]='*';
        star(n-1,x-(m*2-1)/2,y+(m*2)/2);
    }   
    return;
}
main()
{
    int n,time=1,m=1,h=3;
    scanf("%d",&n);
    
    if(n==1)
    {
        printf("*");
        return 0;
    }
    
    for(int i=n;i>1;i--)
    {
        m*=2;
        time+=m*2;
    }
    
    for(int i=0;i<m*2-1;i++)
    {
        for(int j=0;j<time;j++) map[i][j]=' ';
    }
    
    if(n%2==0) star(n,0,0);
    else if(n%2==1) star(n,m*2-2,0);
    if(n%2==0)
    {
        for(int i=0;i<m*2-1;i++)
        {
            for(int j=0;j<time;j++) printf("%c",map[i][j]);
        
            printf("\n");
            time--;
        }
    }
    else if(n%2==1)
    {
        for(int i=0;i<m*2-1;i++)
        {
            for(int j=0;j<time/2+1;j++) printf("%c",map[i][j]);
            time+=2;
            printf("\n");
        }
    
    }
}