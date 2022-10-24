#include<stdio.h>
#include<string.h>

main()
{
    int t;
    scanf("%d",&t);
    char str[82];
    for(int i=0;i<t;i++)
    {
        scanf("%s",str);
        int len=strlen(str),sum=0,score=0;
        for(int j=0;j<len;j++)
        {
            if(str[j]=='O')
            {
                score++;
                sum+=score;
            }
            else score=0;
        }
        printf("%d\n",sum);
    }
}