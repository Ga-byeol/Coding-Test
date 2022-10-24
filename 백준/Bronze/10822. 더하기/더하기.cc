#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    int sum=0,num=0;
    
    fgets(str,102,stdin);
    
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==44||i==strlen(str)-1)
        { 
            sum+=num;
            num=0;
        }
        else num=num*10+str[i]-48;
    }
    printf("%d",sum);
}