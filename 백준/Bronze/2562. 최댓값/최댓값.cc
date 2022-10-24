#include<stdio.h>

main()
{
    int a,b=0,c;
    
    for(int i=1;i<=9;i++)
    {
        scanf("%d",&a);
        if(b<a) 
        {
            b=a;
            c=i;
        }
    }
    printf("%d\n%d",b,c);
}