#include<stdio.h>
#include<string.h>

main()
{
    char str[102];
    int s,b,n,sp;
    
    while(fgets(str,102,stdin))
    {
        s=0,b=0,n=0,sp=0;

        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]>=65&&str[i]<=90) b++;
            else if(str[i]>=97&&str[i]<=122) s++;
            else if(str[i]==32) sp++;
            else if(str[i]>=48&&str[i]<=57) n++;
        }
        printf("%d %d %d %d\n",s,b,n,sp);
        if(feof(stdin)) break;
    }
}