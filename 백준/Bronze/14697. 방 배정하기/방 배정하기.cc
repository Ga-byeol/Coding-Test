#include<stdio.h>

main()
{
    int A,B,C,N;
    
    scanf("%d %d %d %d",&A,&B,&C,&N);
    
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=N;j++)
        {
          for(int z=0;z<=N;z++)
          {
              if(N-C*i-B*j-A*z == 0) 
              {
                  printf("1");
                  return 0;
              }
          }
        }
    }
    printf("0");
}