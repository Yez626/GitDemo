#include <stdio.h>
void Func(int *par);
int main(void)
{
    int arg = 1;
    printf("arg=%d\n", arg);
    Func(&arg);
    printf("arg=%d\n", arg);
    return 0;
}
void Func(int *par)
{
    printf("par=%d\n", *par);
    *par= 2;
}