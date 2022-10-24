#include<stdio.h>

main()
{
    int n,p,result=0,cnt=1,temp;
    scanf("%d %d",&n,&p);
    int arr[1001]={0};

    temp=n*n%p;
    
    while(arr[temp]==0)
    {
        arr[temp]=cnt++;
        temp=(temp*n)%p;
    }
    printf("%d",cnt-arr[temp]);
}