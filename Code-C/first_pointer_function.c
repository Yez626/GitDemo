#include <stdio.h>
void Fun(int x, int y, int (*f)(int, int));
int Max(int x, int y);
int Min(int x, int y);
int Add(int x, int y);
int main(void)
{
    int a, b;
    printf("please enter a,b:");
    scanf("%d,%d", &a, &b);
    Fun(a, b, Max);
    Fun(a, b, Min);
    Fun(a, b, Add);
    return 0;
}
void Fun(int x,int y,int (*f)(int,int))
{
    int result;
    result = (*f)(x, y);
    printf("%d\n", result);
}

int Max(int x,int y)
{
    printf("max=");
    return x > y ? x : y;
}
int Min(int x, int y)
{
    printf("min=");
    return x < y ? x : y;
}
int Add(int x, int y)
{
    printf("sum=");
    return x + y;
}