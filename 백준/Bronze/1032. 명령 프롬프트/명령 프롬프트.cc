#include<stdio.h>
#include<string.h>

char str[50][52],result[52]={0};

void func(int n)
{
    int len=strlen(str[0]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(str[i][j]!=str[i+1][j]) result[j]='?';
            else if(result[j]!='?') result[j]=str[i][j];
        }
    }
}
main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    if(n==1) {printf("%s",str[0]); return 0;}
    func(n);
    printf("%s",result);
}