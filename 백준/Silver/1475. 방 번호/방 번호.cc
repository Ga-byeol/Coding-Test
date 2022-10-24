#include<stdio.h>

main()
{
    int n,arr[10]={0},cnt=0,max=0;
    scanf("%d",&n);
    int count[9]={0};
    
    for(int i=0;i<10;i++)
    {
        arr[i]=n%10;
        n/=10;
        cnt++;
        if(n==0) break;
    }
    for(int i=0;i<cnt;i++)
    {
        if(arr[i]==9) count[6]++;
        else count[arr[i]]++;
    }
    if(count[6]%2!=0) count[6]++;
    count[6]/=2;
    for(int i=0;i<9;i++)
    {
        if(count[i]>max) 
        {   
            max=count[i];
        }
    }
    
    printf("%d",max);
}