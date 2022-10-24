#include<stdio.h>

main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int arr[n]={0};
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]<=arr[i-1])
        {
            cnt+=(arr[i-1]-arr[i])+1;
            arr[i-1]=arr[i]-1;
        }
    }
    printf("%d",cnt);
}