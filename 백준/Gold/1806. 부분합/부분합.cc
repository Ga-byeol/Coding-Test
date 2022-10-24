#include<stdio.h>

main()
{
    int n,s,num,sum=0,result=1000000,st=0,en=0;
    scanf("%d %d",&n,&s);
    
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        arr[i]=num;
    }
    while(1)
    {
         if(sum>s)sum-=arr[st++];
         else if(en==n) break;
         else sum+=arr[en++];
         if(sum>=s&&en-st<=result) result=en-st;
    }
    if(result==1000000) result=0;
    printf("%d",result);
}