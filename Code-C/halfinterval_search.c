#include <stdio.h>
#include <math.h>
int main()
{
    double a = -10;
    double b = 10;
    double root;
    double fx=1;
    while (fx != 0)
    {   root = (a + b) / 2; 
        fx = 2 * root * root * root - 4 * root * root + 3 * root - 6;
        if (fx<0)
            a = root;
        else
            b = root;
    }
    printf("the answer is %f.", root);
}