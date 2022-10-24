#include<stdio.h>
#include<string.h>

main()
{
    char str[10100];
    int num=0,sum=0;
    scanf("%[^EOF]",str);
	
    for(int i=0;i<=strlen(str);i++)
    {
        if(str[i]==10) continue;
        
        else if(str[i]==44||i==strlen(str))
        {
            sum+=num;
            num=0;
        }
        else num=num*10+str[i]-48;
    }
    printf("%d",sum);
}