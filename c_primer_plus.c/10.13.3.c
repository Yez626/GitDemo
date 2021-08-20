#include <stdio.h>
int Max(int a[],int n)
{
    int max=a[0];
    int i;
    for (i = 0; i < n;i++)
        if (max<a[i])
            max = a[i];
    return max;
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int n;
    n=Max(a, 5);
    printf("%d", n);
    return 0;
}