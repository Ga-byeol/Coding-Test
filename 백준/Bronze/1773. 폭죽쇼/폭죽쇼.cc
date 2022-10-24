#include<stdio.h>
main()
{
    int n,c,st,cnt=0;
    scanf("%d %d",&n,&c);
    int arr[2000001]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&st);
        for(int j=1;st*j<=c;j++)
        {
            if(!arr[st*j]) 
            {
                arr[st*j]=1;
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}