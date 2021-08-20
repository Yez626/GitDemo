#include <stdio.h>
int global;
void GlobalPlusPlus(void);
int main(void)
{
    global = 1;
    printf("Before GlobalPlusPlus(), it is %d\n", global);
    GlobalPlusPlus();
    printf("After GlobalPlusPlus(), it is %d\n", global);
    return 0;
}
//函数功能：对全局变量global加1，并打印加1之前与之后的值
void GlobalPlusPlus(void)
{
    printf("Before ++, it is %d\n", global);
    global++;
    printf("After m ++, it is %d\n", global);
}