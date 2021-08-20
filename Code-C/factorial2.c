#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, n;
    long p = 1;
    printf("please enter the number n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        p = p * i;
    }
    printf("answear=%ld", p);
    return 0;
}