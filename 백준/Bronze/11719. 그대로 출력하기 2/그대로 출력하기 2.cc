#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    
    while(fgets(str,102,stdin))
    {
        printf("%s",str);
    }
}