#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    scanf("%s",str);
    int len=strlen(str);
    int nel=len-1;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[nel])
        {
            printf("0");
            return 0;
        }
        nel--;
    }
    printf("1");
}