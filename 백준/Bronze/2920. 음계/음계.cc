#include<stdio.h>

main()
{
    int x,a=1,b=1;
    
    for(int i=1;i<=8;i++)
    {
        scanf("%d",&x);
        if(x!=i)a=0;
        if(x!=9-i) b=0;
    }
    if(a==1) printf("ascending");
    else if(b==1) printf("descending");
    else printf("mixed");
}