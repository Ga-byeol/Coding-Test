#include<stdio.h>

main()
{
    int s,y,n,k;
    int std[2][7]={0};
    int room=0;
    scanf("%d %d",&n,&k);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&s,&y);
        std[s][y]++;
    }
    
    room += (std[0][1]+std[1][1]+std[0][2]+std[1][2]+k-1)/k;
    room += (std[0][3]+std[0][4]+k-1)/k;
    room += (std[1][3]+std[1][4]+k-1)/k;
    room += (std[0][5]+std[0][6]+k-1)/k;
    room += (std[1][5]+std[1][6]+k-1)/k;
    
    printf("%d",room);
}