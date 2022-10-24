#include<stdio.h>

main()
{
    int n,A=1,cnt=1,r=1;
    scanf("%d",&n);

    while(1)
    {
        if(n<=r) break;
           A=6*cnt;
           cnt++;
           
           r=r+A;
     }
 
    printf("%d",cnt);
}