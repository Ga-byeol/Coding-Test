#include<stdio.h>

main()
{
    int day,num,count=0;
    scanf("%d",&day);
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num);
        if(day==num) count++;
    }
    printf("%d",count);
}