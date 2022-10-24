#include<stdio.h>
#include<string.h>

main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       char str[70];
       scanf("%s",str);
       int len=strlen(str)-1;
       str[len]%2==0 ? printf("even\n") : printf("odd\n");
   }
}