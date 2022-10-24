#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        printf("%c",str[i]);
        if(i%10==9)printf("\n");
    }
}