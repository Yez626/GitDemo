#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 5;i++)
    {
        printf("please enter n:");
        scanf("%d", &n);
        if (n<0)
            break;//改成continue以后程序不报错
        printf("n=%d\n", n);
    }
    printf("the programme is over.");
    return 0;
}