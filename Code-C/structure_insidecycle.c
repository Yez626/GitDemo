#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 3;i++)
    {
        printf("i=%d:", i);
        for (j = 0; j < 4;j++)
        {
            printf("j=%d\t",j);
        }
        printf("\n");
    }
    return 0;
}