#include<stdio.h>

main()
{
    int M,N,x,y,T;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        
        scanf("%d %d %d %d",&M,&N,&x,&y);
        int tempy=x,cnt=x,a=M,b=N,t;
        
        while(1)
        { 
            if(x==y) {
                printf("%d\n",x); break;
            }
            
            while(b>0)
            {
                t=b;
                b=a%b;
                a=t;
            }
            
            for(cnt=x; cnt <=M*N/a;cnt+=M)
            {
                tempy = (cnt%N==0) ? N : cnt%N;
                if(tempy == y)
                {
                    printf("%d\n",cnt);
                    break;
                }
            }
            if(cnt>M*N/a) printf("-1\n");
            
            break;
        }
       
    }
}