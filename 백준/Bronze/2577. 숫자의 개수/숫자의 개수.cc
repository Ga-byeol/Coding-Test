#include<stdio.h>

main()
{
    int A,B,C,SUM;
    scanf("%d %d %d",&A,&B,&C);
    SUM = A*B*C;
    char num[10] = {0};
    while(SUM>0)
    {
        num[SUM%10]+=1;
        SUM/=10;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",num[i]);
    }
}