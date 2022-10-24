#include<stdio.h>

main()
{
    int a,b,c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a+b+c==180)
    {
        if(a==b&&a==c) printf("Equilateral");
        else if(a==b||b==c||c==a) printf("Isosceles");
        else printf("Scalene");
    }
    else printf("Error");

}