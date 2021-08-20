#include <stdio.h>
#include <math.h>
#define const 1.42e8
int main()
{
    int i;
    double sum = 0;
    double p=1;
    for ( i = 1; i <= 64;i++)
    {
        sum = sum + p;
        p = 2*p;
    }
    printf("The king need %e square meter rice.", sum/const);
    return 0;
}