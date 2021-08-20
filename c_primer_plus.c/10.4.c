#include <stdio.h>
int main()
{
    int i;
    const int Day[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (i = 0; i <= 11; i++) //也可以写成sizeof Day/sizeof Day[0];期中sizeof运算符给出它的运算对象的大小；避免越界的小技巧；
    {
        printf("Month %d has %d days.\n", i+1, Day[i]);
    }
    return 0;
}