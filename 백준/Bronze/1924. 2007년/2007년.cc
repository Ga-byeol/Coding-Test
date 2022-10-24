#include<stdio.h>

main()
{
    int x,y,n=1;
    char arr[12][31]={0};
    scanf("%d %d",&x,&y);
    
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<31;j++)
        { 
            if((i==3||i==5||i==8||i==10)&&j==30) break;
            else if(i==1&&j==28) break;
            arr[i][j]=n%7;
            n++;
        }
    }
    switch(arr[x-1][y-1])
    {
        case 0 : printf("SUN"); break;
        case 1 : printf("MON"); break;
        case 2 : printf("TUE"); break;
        case 3 : printf("WED"); break;
        case 4 : printf("THU"); break;
        case 5 : printf("FRI"); break;
        case 6 : printf("SAT"); break;
    }
}