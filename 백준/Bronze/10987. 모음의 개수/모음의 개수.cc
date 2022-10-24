#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    scanf("%s",str);
    int len=strlen(str),cnt=0;
    
    for(int i=0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') cnt++;
    }
           printf("%d",cnt);
}