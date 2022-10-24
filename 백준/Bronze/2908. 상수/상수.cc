#include<stdio.h>

main()
{
    int A,B,T;
    scanf("%d %d",&A,&B);
    
    T=A/100+(A%100-A%10)+(A%10)*100;
    A=B/100+B%100-B%10+B%10*100;
    B=T;
    printf("%d",(A>B) ? A : B);
}