#include <stdio.h>
int mian(void)
{
    int a = 1;
    {
        int a = 2;
        printf("in the inner block,a=%d\n", a);
    }
    printf("in the outer block,a=%d\n", a);
    return 0;
}//会发现，两个a毫无瓜葛