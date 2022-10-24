#include<stdio.h>

main()
{
    int H,M;
    scanf("%d %d",&H,&M);
    
    if(M==45) M=0;
    
    else if(M<45)
    {
        M=60-45+M;
        H=H-1;
    }
    else M=M-45;
    
    if(H<0) H=23;
        
    printf("%d %d",H,M%60);
}