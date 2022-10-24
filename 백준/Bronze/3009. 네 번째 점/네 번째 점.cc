#include<stdio.h>

main()
{
    int x,y,a,b,c,d,aX,aY;
    
    
    for(int i=1;i<=3;i++)
    {
        scanf("%d %d",&x,&y);
        if(i==1) 
        {
            a=x;
            b=y;
        }
        if(i==2)
        {
            c=x;
            d=y;
        }
    }   if(a==c) aX=x;
        else if(c==x) aX=a;
        else aX=c;
        
        if(b==d) aY=y;
        else if(d==y) aY=b;
        else aY=d;
        
    printf("%d %d",aX,aY);
}