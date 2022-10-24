#include<stdio.h>

main()
{
    int x,y,w,h,min=1000;
    
    scanf("%d %d %d %d",&x,&y,&w,&h);
    int arr[4]={x,y,w-x,h-y};
   
    for(int i=0;i<4;i++)
    {
        if(arr[i]<min) min=arr[i];
    }  
    printf("%d",min);   
}