#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    scanf("%s",str);
    int len=strlen(str),alph[26];
    memset(alph,-1,4*26);
    
    for(int i=0;i<len;i++)
    {
        if(alph[str[i]-97]==-1) alph[str[i]-97]=i;
    }
    for(int i=0;i<26;i++)printf("%d ",alph[i]);
    
}