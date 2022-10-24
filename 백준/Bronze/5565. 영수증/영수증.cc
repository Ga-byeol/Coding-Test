#include<stdio.h>

main()
{
    int T,v;
    
    scanf("%d",&T);
    for(int i=0;i<9;i++)
    {
        scanf("%d",&v);
        T=T-v;
    }
    printf("%d",T);
}