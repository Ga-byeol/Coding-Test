#include<stdio.h>
#include<string.h>

main()
{
    char str[52];
    scanf("%s",str);
    int len=strlen(str),h=10;
    for(int i=1;i<len;i++)
    {
            str[i-1]==str[i] ? h+=5 : h+=10;
    }
    printf("%d",h);
}