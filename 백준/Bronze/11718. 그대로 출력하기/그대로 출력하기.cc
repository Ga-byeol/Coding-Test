#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    
    while(scanf(" %[^\n]s",str)!=EOF)
    {
        printf("%s\n",str);
    }
}