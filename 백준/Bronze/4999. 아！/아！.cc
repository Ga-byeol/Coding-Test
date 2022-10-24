#include<stdio.h>
#include<string.h>

main()
{
    char str[1002],hpt[1002];
    
    scanf("%s %s",str,hpt);
    if(strlen(str)<strlen(hpt)) printf("no");
    else printf("go");
}