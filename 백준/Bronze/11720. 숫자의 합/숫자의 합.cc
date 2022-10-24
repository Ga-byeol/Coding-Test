#include<stdio.h>
#include<string.h>

main()
{
    int n,sum=0;
    scanf("%d",&n);
    char str[102];
    scanf(" %s",str);
    
    for(int i=0;i<n;i++)
    {
        sum=sum+str[i]-48;
    }
    printf("%d",sum);
}