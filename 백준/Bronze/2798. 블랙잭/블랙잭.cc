#include<stdio.h>

main()
{
    int n,m,result=0,sum=0;
    scanf("%d %d",&n,&m);
    
    int arr[n]={0};
    
    for(int i=0;i<n;i++)  scanf("%d",&arr[i]);
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int v=j+1;v<n;v++)
            {
                sum=arr[i]+arr[j]+arr[v];
                if(sum<=m&&sum>=result) result = sum;
            }
        }
    }
    printf("%d",result);
}