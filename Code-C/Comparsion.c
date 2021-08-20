#include <stdio.h>
//函数功能：返回x，y中较大的数；
int Max(int x,int y)
{
    int result = (x > y) ? x : y;
    return result;
}
int main()
{
    int a, b;
    printf("please enter 2 number:");
    scanf("%d,%d", &a,&b);  //在这里进行函数调用
    int larger = Max(a, b);
    printf("%d is larger.\n", larger);
    return 0;
}

//另外一种写法
//
#include <stdio.h>
int Max(int x, int y);//在这里直接进行函数声明，直接引用
int main()
{
    int a, b;
    printf("please enter 2 number:");
    scanf("%d,%d", &a,&b);  //在这里进行函数调用
    int larger = Max(a, b);
    printf("%d is larger.\n", larger);
    return 0;
}
int Max(int x,int y)
{
    int result = (x > y) ? x : y;
    return result;
}