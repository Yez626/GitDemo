#include <stdio.h>
#include <math.h>
#define const 1e-4
int main()
{
    double a=1;
    double n;
    double b = 0;
    int counter=0;
    for (n = 1; 1/a >= const;n++)
    {
        a = 2 * n - 1;
        b = b + pow(-1,n-1)*1 / a;
        counter++;
    }
    printf("pi=%f\n", 4 * b);
    printf("count=%d\n", counter);
    return 0;
}