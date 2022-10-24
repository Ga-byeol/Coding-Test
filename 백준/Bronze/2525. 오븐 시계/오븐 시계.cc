#include<stdio.h>

main()
{
    int A,B,C,endA=0,endB=0;
    
    scanf("%d %d",&A,&B);
    scanf("%d",&C);
    
    endB = (B+C%60)%60;
    C=B+C;
    endA = (endA+A+C/60)%24;
    
    
    printf("%d %d",endA,endB);
}