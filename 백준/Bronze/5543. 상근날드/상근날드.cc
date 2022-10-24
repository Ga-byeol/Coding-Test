#include<stdio.h>

main()
{
    int burger,drink,a=2000,b=2000;
    
    for(int i=0;i<3;i++)
    {
        scanf("%d",&burger);
        if(burger<=a) a=burger;
    }
    for(int i=0;i<2;i++)
    {
        scanf("%d",&drink);
        if(drink<=b) b=drink;
    }
    printf("%d",a+b-50);
}