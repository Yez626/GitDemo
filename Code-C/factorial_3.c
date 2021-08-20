#include <stdio.h>
long fact(long n);
int main()
{
    int n;
    long result;
    printf("Input n:");
    scanf("%d", &n);
    result = fact(n);
    if (result!=0)
    {
        printf("%d!=%ld\n", n, result);
    }
}
long fact(long n)
{
    if (n<0)
    {
        return 0;
    }
    else if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}