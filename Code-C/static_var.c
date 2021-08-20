#include <stdio.h>
void Func(void);
int main(void)
{
    int i;
    for (i = 0; i < 10;i++)
    {
        Func();
    }
    return 0;
}
//
void Func()
{
    int times = 1;
    printf("Func() was called %d times.\n", times++);
}
