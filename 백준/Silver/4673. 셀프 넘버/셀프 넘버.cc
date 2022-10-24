#include<stdio.h>

main()
{
    int n=1,key=0;
    
    while(1)
    {   
        if(n>10000) break;

        
        
        for(int i=1;i<=n;i++)
        {
            int x;
            x=i+i/1000+(i%1000-i%100)/100+(i%100-i%10)/10+i%10;
            if(n==x) break;
            
            else if(i==n) key=1;
        }
        if(key==1) 
        {
            printf("%d\n",n);
            key=0;
        }
        n++;
    }
}