#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int result = 1;
    int counter = 0;
    printf("please enter a integer n:");
    scanf("%d", &n);
    if (n!=1)
    {
    do
    {   counter++;
        result = result * (counter + 1);
    } while (counter < n-1 );
    printf("answer:%ld", result);
    printf("count=%d", counter);
    }
    else
        printf("answer:1");
    return 0;
}