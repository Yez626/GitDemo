#include <stdio.h>
int Max(double *p,int n)
{
    int i, m = 0;
    for (i = 0; i < n;i++)
        if (*(p+i)>*(p+m))
            m = i;
    return m;
}
int main()
{
    double a[5] = {1, 2, 3, 4, 5};
    int n;
    n=Max(a, 5);
    printf("%d", n);
    return 0;
}