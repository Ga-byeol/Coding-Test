#include<stdio.h>

int 
main()
{
    int A,B,C,x,y,z;
    
    while(1)
    {
        scanf("%d %d %d",&A,&B,&C);
        if(A==0&&B==0&&C==0) return 0;
        if(A<B&&A<C) 
        {
            x=A;
            y = B<C ? B : C;
            z = B<C ? C : B;
        }
        else if(B<A&&B<C) 
        {
            x=B;
            y = A<C ? A : C;
            z = A<C ? C : A;
        }
        else if(C<A&&C<B) 
        {
            x=C;
            y = A<B ? A : B;
            z = A<B ? B : A;
        }
        if(z*z==x*x+y*y) printf("right\n");
        else printf("wrong\n");
    }
}