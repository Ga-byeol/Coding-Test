#include<stdio.h>

main()
{
    int n,num,x;
    scanf("%d",&n);
    int arr[10]={0};
    for(int i=0;i<10;i++)
    {
        arr[i]=n%10;
        n/=10;
        if(n==0) 
        {
            num=i;
            break;
        }
    }
    for(int i=0;i<=num;i++)
    {
        for(int j=0;j<=num-i;j++)
        {
            if(arr[i]<arr[i+j])
            {
                x=arr[i];
                arr[i]=arr[i+j];
                arr[i+j]=x;
            }
        }
    }
    for(int i=0;i<=num;i++)
    {
    printf("%d",arr[i]);
    }
}