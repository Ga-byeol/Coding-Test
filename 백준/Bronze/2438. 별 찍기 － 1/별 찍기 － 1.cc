#include<stdio.h>

void star(int a)
{        
    for(int i=0;i<a;i++)
         {
           printf("*");
         }
     printf("\n");        
}

int main()
{    
    int n;
    
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
    star(i);
    }
}
