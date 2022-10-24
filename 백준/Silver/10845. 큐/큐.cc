#include<stdio.h>
#include<string.h>

struct stack{
    int stack[10001]={0};
    }stack;

main()

{
    int n,num;
    int cnt=0;
    
    scanf("%d",&n);
    
    while(n--)
    {
        char s[10];
        scanf("%s",s);
        
        if(!strcmp(s,"push"))
        {
            scanf("%d",&num);
            stack.stack[cnt]=num;
            cnt++;
        }
        else if(!strcmp(s,"pop"))
        {
            if(cnt!=0)
            {
                
                if(cnt!=0)
                {
                    printf("%d\n",stack.stack[0]);
                    for(int i=0;i<=cnt;i++)
                    {
                        stack.stack[i]=stack.stack[i+1];
                    }
                }
                else printf("-1\n"); 
                cnt--;
            }
            else printf("-1\n");
        }
        else if(!strcmp(s,"size"))
        {
            printf("%d\n",cnt);
        }
        else if(!strcmp(s,"empty"))
        {
            if(cnt!=0) printf("0\n");
            else printf("1\n");
        }
        else if(!strcmp(s,"front"))
        {
            if(cnt!=0) printf("%d\n",stack.stack[0]);
            else printf("-1\n");
        }
        else if(!strcmp(s,"back"))
        {
            if(cnt!=0) printf("%d\n",stack.stack[cnt-1]);
            else printf("-1\n");
        }
    }
}