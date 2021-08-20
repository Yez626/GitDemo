#include <stdio.h>
int main()
{
    int a, b, max;
    printf("please enter a,b:");
    scanf("%d%d", &a, &b);
    max = a >= b ? a : b;
    printf("max =%d\n", max);
    return 0;
}