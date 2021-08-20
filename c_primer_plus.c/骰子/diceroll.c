//几个骰子一起骰并计算结果//
#include "diceroll.h"
#include <stdio.h>
#include <stdlib.h>  //提供库函数rand()的原型//
int roll_count = 0;       //外部链接//

static int rollem(int sides)         //该函数属于改文件所私有//
{
    int roll;

    roll = rand() % sides + 1;
    ++roll_count;                  //计算函数调用次数//

    return roll;
}
int roll_n_dice(int dice,int sides)
{
    int d;
    int total = 0;
    if (sides<2)
    {
        printf("Need at least 2 sides.\n");
        return -1;
    }
    if (dice<1)
    {
        printf("Need at least 1 die.\n");
        return -1;
    }
    for (d = 0; d < dice;d++)
    {
        total += rollem(sides);
    }
    return total;
}