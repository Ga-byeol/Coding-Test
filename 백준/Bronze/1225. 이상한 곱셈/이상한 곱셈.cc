#include<stdio.h>
#include<string.h>

main()
{
    char a[10001]={0},b[10001]={0};
    
    scanf("%s %s",a,b);
    
    int len=strlen(b),t=0;
    long long sum=0;
    for(int i=0;i<len;i++)
    {
        t+=b[i]-'0';
    }
    len=strlen(a);
    for(int i=0;i<len;i++)
    {
        sum+=(a[i]-'0')*t;
    }
    printf("%lld",sum);
}