#include<stdio.h>

main()
{
    int K,C,M,N,cnt;//K=총 턴
    scanf("%d %d",&K,&C);
    
    for(int i=0;i<C;i++)
    {
        scanf("%d %d",&M,&N);
        
        int key =K - (M>N ? M : N);
        
        if((M>=N&&M-key-N>2)||(M<N&&N-key-M>1)) printf("0\n");
        
        else printf("1\n");
    }
}