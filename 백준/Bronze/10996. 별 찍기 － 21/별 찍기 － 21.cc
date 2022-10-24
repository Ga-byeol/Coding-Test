#include<stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n*2;i++)
    {
        if(i%2==0) 
        {
            for(int j=0;j<n;j++) printf("%c",j%2==0 ? 42 : 32);
        }
        else 
        {
         for(int j=0;j<n;j++) printf("%c",j%2!=0 ? 42 : 32);   
        }
        printf("\n");
    }
}