#include<stdio.h>
#include<string.h>

main()
{
    char str[102],name[102];
    
    scanf("%s",str);
    int len=strlen(str),cnt=0;
    for(int i=0;i<len;i++)if(i==0||str[i]==45)name[cnt++] = i==0 ? str[i] : str[i+1];

    printf("%s",name);
}