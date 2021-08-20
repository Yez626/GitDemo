#include <stdio.h>
#include <math.h>
int main()
{
    int m, i;
    int flag = 1;
    printf("please enter a number:");
    scanf("%d", &m);
    for (i = 2; i <= m - 1; i++)
    {
        if (m%i==0)
           {
               flag = 0;
               printf("%d\n",i);
           }
    }
    if (flag)
    {
        printf("Yes!\n");
    }
    printf("Programme is over!\n");
    return 0;
}