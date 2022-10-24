#include<stdio.h>
#include<algorithm>

int n,total;

void sort(int* arr)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }

    return;
}
int search(int* arr,int start, int end) 
{
    int mid = 0, diff = total;
    while(start <= end) 
    {
        int sum = 0;
        
        mid = (start + end) / 2;
        
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] <= mid)sum += arr[i];
            else sum += mid;
        }
        if ((total - sum) >= 0 && (total - sum) <= diff) diff = total - sum;
        
        if ((total - sum) == 0)return mid;
        else if ((total - sum) < 0)end = mid - 1;
        else if ((total - sum) > 0)start = mid + 1;
    }
    return end;
}
main()
{
    scanf("%d",&n);
    
    int arr[n],result;
    
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    scanf("%d",&total);
    
    sort(arr);
    
    result=search(arr,0,arr[n-1]);
    
    printf("%d",result);
}