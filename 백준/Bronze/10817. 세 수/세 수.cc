#include<stdio.h>

main()
{
    int A,B,C,num;
    scanf("%d %d %d",&A,&B,&C);
    

    if(A<=B&&B<=C) num=B;
    else if(A<=C&&C<=B) num=C;
    else if(B<=A&&A<=C) num=A;
    else if(C<=B&&B<=A) num=B;
    else if(B<=C&&C<=A) num=C;
    else if(C<=A&&A<=B) num=A;

    printf("%d",num);
}