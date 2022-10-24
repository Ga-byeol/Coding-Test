#include<stdio.h>

main()
{
    int n,count=0;
    
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<4;i++)
        {
            scanf("%d",&n);
            if(n==0) count++;
        }
        
        switch(count)
        {
            case 0 : printf("E\n"); break;
            case 1 : printf("A\n"); break;
            case 2 : printf("B\n"); break;
            case 3 : printf("C\n"); break; 
            case 4 : printf("D\n"); break;
        }
        count=0;
    }
}