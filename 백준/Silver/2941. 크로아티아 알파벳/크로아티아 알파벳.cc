#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    scanf("%s",str);
    int cnt=0,len=strlen(str);
    
    for(int i=0;i<len;i++)
    {
        if(str[i]=='c'&&(str[i+1]=='='||str[i+1]=='-'))
        {
                i++;
                cnt++;
                continue;
        }
        else if(str[i]=='d'&&(str[i+1]=='-'||(str[i+1]=='z'&&str[i+2]=='=')))
        {
            str[i+1]=='z' ? i+=2 : i++;
            cnt++;
            continue;
        }
        else if((str[i]=='n'||str[i]=='l')&&str[i+1]=='j')
        {
            i++;
            cnt++;
            continue;
        }
        else if((str[i]=='s'||str[i]=='z')&&str[i+1]=='=')
        {
            i++;
            cnt++;
            continue;
        }
        else cnt++;
    }
    printf("%d",cnt);
}