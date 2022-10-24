#include<stdio.h>

main()
{
    int n,cnt=10;
    int arr[10];
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&n);
        arr[i]=n%42;
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j]) 
            {
                cnt--;
                break;
            }
        }
    }
    printf("%d",cnt);
}