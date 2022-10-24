#include<stdio.h>
#include<string.h>
int max(int* alph)
{
    int max=0,n,i,cnt=0;
    for(i=0;i<37;i++)
    {
        if(alph[i]>max) 
        {
            max=alph[i];
            n=i;
        }
    }
    while(i--)if(alph[i]==max)cnt++;
    if(cnt>1) return 63;
    return n+64;
}
main()
{
    char str[1000002];
    int alph[37]={0},len;
    scanf("%s",str);
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>96)
        {
            alph[str[i]-96]++;
        }
        else alph[str[i]-64]++;
    }
    printf("%c",max(alph));
}