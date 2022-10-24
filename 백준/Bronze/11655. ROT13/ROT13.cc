#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    scanf("%[^\n]s",str);
    int len=strlen(str);
    
    for(int i=0;i<len;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]+=13;
            if(str[i]>90) 
            {
                str[i]%=91;
                str[i]+=65;
            }
        }
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]<=114 ? str[i]+=13 : str[i]-=13;
            if(str[i]>122) 
            {
                str[i]%=123;
                str[i]+=97;
            }
        }
    }
    printf("%s",str);
}