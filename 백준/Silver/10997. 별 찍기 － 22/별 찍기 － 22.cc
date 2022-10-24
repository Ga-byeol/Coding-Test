#include<stdio.h>
char map[500][500];
void star(int n,int x,int y)
{
    int w,h;
    w=4*n-3;
    h=w+2;
    
    for(int i=1;i<w;i++) map[x][y--]='*';
    for(int i=1;i<h;i++) map[x++][y]='*';
    for(int i=1;i<w;i++) map[x][y++]='*';
    for(int i=1;i<h-2;i++) map[x--][y]='*';
    
    map[x][y]='*';
    y--;
    map[x][y]='*';
    
    if(n==2)
    {
        map[x][y-1]='*';
        map[x+1][y-1]='*';
        map[x+2][y-1]='*';
        return;
    }
    star(n-1,x,y-1);
}
main()
{
    int n,w,h,x=0,y;
    scanf("%d",&n);
    
    if(n==1) 
    {
        printf("*");
        return 0;
    }
    w = 4*n-3;
    h = w+2;
    y=4*n-4;
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) map[i][j]=' ';
    
    star(n,x,y);
    
    for(int i=0;i<h;i++)
    {
        if(i==1) 
        {
            printf("*\n");
            continue;
        }
        for(int j=0;j<w;j++) printf("%c",map[i][j]);
        
        printf("\n");   
    }
}