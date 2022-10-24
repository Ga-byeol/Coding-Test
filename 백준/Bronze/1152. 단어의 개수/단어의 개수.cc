#include<stdio.h>
#include<string.h>

main()
{
    char str[1000001]={NULL};
    int cnt=0;
    
    scanf("%[^\n]",str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            if(i>0&&str[i-1]!=' ') continue;
            
            else cnt++;
        }
    }
    printf("%d",cnt);
}