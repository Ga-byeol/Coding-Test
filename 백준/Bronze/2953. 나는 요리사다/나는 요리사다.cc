#include<stdio.h>

main()
{
    int score,win=0,num;
    
    for(int j=1;j<=5;j++)
    {
    for(int i=0;i<4;i++)
    {   
        int sum;
        if(i==0) sum=0;
        
        scanf("%d",&score);
        sum=sum+score;
        if(win<sum) 
        {
            win=sum;
            num=j;
        }
    }
    }
    printf("%d %d",num,win);
}