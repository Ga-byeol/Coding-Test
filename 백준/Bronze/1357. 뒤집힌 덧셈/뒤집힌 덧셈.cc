#include<stdio.h>

int Rev(int num)
{   
    if(num<10) return num;
    else if(num<100) return num/10+(num%10)*10;
    else if(num<1000) return num/100+(num%100-num%10)+(num%10)*100;
    else return num/1000+(num%1000-num%100)/10+(num%100-num%10)*10+(num%10)*1000;
}
main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    
    printf("%d",Rev(Rev(X)+Rev(Y)));
}