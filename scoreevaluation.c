#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("please enter your score:");
    scanf("%d", &score);
    if (score<0||score>100)
        printf("wtf?please be serious."); //数据的合法性
    else if (score>=90)
        printf("A");
    else if (score>=80)
        printf("B");
    else if (score>=70)
        printf("C");
    else if (score>=60)
        printf("D");
    else
        printf("%d--E\n", score);
    return 0;
}