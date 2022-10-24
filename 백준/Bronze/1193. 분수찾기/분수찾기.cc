#include <stdio.h>

 main()
{
    int x, y = 0, i = 2, j = 1, k = 2, cnt = 2;
    
    scanf("%d", &x);
    
    if(x == 1)
    {
        printf("1/1");
        return 0;
    }
    while(1)
    {
        if(i <= x && i + j >= x)
        {
            if(j % 2 == 1) y = 0;
            else y = 1;
            break;
        }
        i = i + j + 1;
        j++;
    }
    i = 2, j = 0, k = 0;
    while(1)
    {
        j = 1;
        for(k = i; k > 0; k--)
        {
            if(x == cnt)
            {
                printf("%d/%d", (y == 1) ? k : j, (y == 1) ? j : k);
               return 0;
            }
            j++;
            cnt++;
        }
        i++;
    }
}