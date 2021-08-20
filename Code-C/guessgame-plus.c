#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int a;
    int guess;
    int counter = 0;
    //unsigned int seed;
    //printf("please enter a seed number:");
    //scanf("%d", &seed);
    srand(time(NULL));       //srand函数为rand()设置随机数种子
    a = rand() % 100 + 1;
    do{
        printf("have a guess:");
        scanf("%d", &guess);
        counter++;
        if (guess>a)
        {
            printf("Try again! Too high!");
        }
        else if (guess<a)
        {
            printf("Try again! Too low!");
        }
        else 
        {
            printf("you got it right!");
        }
    } while (guess != a);
    printf("counter=%d", counter);
    return 0;
}