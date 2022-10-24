#include<stdio.h>
#include<string.h>

main()
{
    char A[20],B[10],C[20],D[10];
    
    long long sumA=0,sumC=0;
    scanf("%s %s %s %s",A,B,C,D);
    strcat(A,B);
    strcat(C,D);
    for(int i=0;i<strlen(A);i++)
    {
        sumA=sumA*10+A[i]-'0';
    }
    for(int i=0;i<strlen(C);i++)
    {
        sumC=sumC*10+C[i]-'0';
    }
    //printf("%s %s\n",A,C);
    printf("%lld",sumA+sumC);
}