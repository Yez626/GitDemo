#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define EPS 1e-6
int main()
{
    float p, q,disc,a,b,c;
    printf("please enter a,b,c:");
    scanf("%f,%f,%f", &a, &b, &c);
    q = b * b - 4 * a * c;
    disc =sqrt(q) / 2*a;
    p = -b / (2 * a);
    if (fabs(a)<=EPS)
    {
        printf("It is not a quadratic equation!\n");
        exit(0);
    }
    if  (q>=0)
    {
        printf("%6.2f,%6.2f", p + disc, p - disc);
    }
    if (q<0)
    {
        printf("no answer");
    }
    return 0;
}
