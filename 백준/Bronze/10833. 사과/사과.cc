#include<stdio.h>

main()
{
    int N,student,apple,sum=0;
    
    scanf("%d",&N);
    
    for(int i=0;i<N;i++)
    {
        scanf("%d %d",&student,&apple);
        
        sum=sum+apple%student;
        
    }
    printf("%d\n",sum);
}