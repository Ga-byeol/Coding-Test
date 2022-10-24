#include<stdio.h>
#include<string.h>

main()
{
    char str[20];
    scanf("%s",str);
    int len=strlen(str),sec=0;
    
    for(int i=0;i<len;i++)
    {
        if(str[i]=='A'||str[i]=='B'||str[i]=='C') sec+=3;
        else if(str[i]=='D'||str[i]=='E'||str[i]=='F') sec+=4;
        else if(str[i]=='G'||str[i]=='H'||str[i]=='I') sec+=5;
        else if(str[i]=='J'||str[i]=='K'||str[i]=='L') sec+=6;
        else if(str[i]=='M'||str[i]=='N'||str[i]=='O') sec+=7;
        else if(str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='S') sec+=8;
        else if(str[i]=='T'||str[i]=='U'||str[i]=='V') sec+=9;
        else if(str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]=='Z') sec+=10;
    }
    printf("%d",sec);
}