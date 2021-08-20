#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    a = rand();//
    printf("please enter an integer to guess");
    scanf("%d", &b);
    if (b<a)
    {
        printf("Wrong!Too low.Try again.\n");
    }
    else if (b>a)
    {
        printf("Wrong!Too high. Try again.\n");
    }
    else
    {
        printf("Right!\n");
        printf("The number is %d", a);
    }
    return 0;
}