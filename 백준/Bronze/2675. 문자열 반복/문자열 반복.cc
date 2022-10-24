#include<stdio.h>
#include<string.h>

main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char str[22];
        int r,len;
        
        scanf("%d %s",&r,str);
        
        len = strlen(str);
        
        for(int j=0;j<len;j++) for(int l=0;l<r;l++) printf("%c",str[j]);

        printf("\n");
    }
}