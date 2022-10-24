#include<stdio.h>

main()
{
    int n,Pi,A=0,sum=0,M=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&Pi);
        if(i==0) A=Pi;
        else if(A<Pi) 
        {   
            sum=sum+Pi-A;
            if(M<sum) M=sum;    
            
        }
        else sum=0;
        A=Pi;
    }
    printf("%d",M);
}