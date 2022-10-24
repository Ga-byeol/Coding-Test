#include<stdio.h>

int main()
{
    int num[6]={0};
    
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    
    num[5] = (num[0]*num[0]+num[1]*num[1]+num[2]*num[2]+num[3]*num[3]+num[4]*num[4])%10;
    
    printf("%d",num[5]);
    
}