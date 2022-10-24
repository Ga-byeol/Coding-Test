#include<stdio.h>

void star2(int a)
{        

    for(int j=0;j<a;j++)
        {
            printf("*");
        }
        
}
int main()
{    
    int n;
    
    scanf("%d",&n);
    for (int i=0;i<=n;i++)
    {
    star2(n-i);
    printf("\n");
    }

}