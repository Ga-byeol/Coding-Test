#include<stdio.h>
#include<string.h>

main()
{
    char str[102],alph[36];
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        memset(alph,0,1*36);
        scanf("%s",str);
        int len = strlen(str),be=str[0],flag=1;
        for(int j=0;j<len;j++)
        {
            if(alph[str[j]-97]==0||str[j]==be)
            {
                alph[str[j]-97]++;
                be=str[j];
            }
            else 
            {
                flag=0;
                break;
            }
        }
        if(flag)cnt++;
    }
    printf("%d",cnt);
}