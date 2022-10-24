#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char a[3][4]={"pi","ka","chu"};
int check(char* str,int pos)
{
    int len=0;
    
    for(int i=0;i<3;i++)
    {
        len = strlen(a[i]);
        if(memcmp(str+pos,a[i],len)==0) return len;
    }
    printf("NO");
    exit(0);
}
main()
{
    char str[5002];
    scanf("%s",str);
    //getchar();
    int len=strlen(str);
    
    for(int i=0;i<len;)
    {
        i+=check(str,i);
    }
    printf("YES");
}