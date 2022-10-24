#include<stdio.h>

main()
{
    int T,a,b;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        int sum=0;
        scanf("%d %d",&a,&b);
        if(a!=0)
        {
            if(a==1) sum=sum+500;
            else if(a<4) sum=sum+300;
            else if(a<7) sum=sum+200;
            else if(a<11) sum=sum+50;
            else if(a<16) sum=sum+30;
            else if(a<22) sum=sum+10;
        }
        if(b!=0)
        {
            if(b==1) sum=sum+512;
            else if(b<4) sum=sum+256;
            else if(b<8) sum=sum+128;
            else if(b<16) sum=sum+64;
            else if(b<32) sum=sum+32;
        }
        printf("%d\n",sum*10000);
    }
}