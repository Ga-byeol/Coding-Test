#include<stdio.h>
#include<string.h>
main()
{
    char str[102];
    int cnt=1;
    
    scanf("%s",str);
    
    for(int i=0;i<strlen(str);i++) if(str[i]==44) cnt++;
    
    printf("%d",cnt);
}