#include<stdio.h>
#include<string.h>

main()
{
    char str[1002];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]-=3;
        if(str[i]<65) str[i]+=26;
    }
    printf("%s",str);
}