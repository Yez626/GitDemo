#include <stdio.h>
int main(void)
{
    for (int i = 1 ;i <= 3; i++)
    {
        printf("here comes the interactions:%d\n",i);
        trystat();
    }
    return 0;
}
void trystat(void)
{
    int fade = 1;
    static int stay = 1;
    printf("fade=%d,stay=%d\n", fade++, stay++);//这里注意显示fade的值传给函数print再自增//
}