#include <stdio.h>
void new_sum(int a[],int b[],int c[],int n)
{   
    for (int i = 0; i < n;i++)
        *(c + i) = *(b + i) + *(a + i);
}
int main(void)
{   int c[4];
    int i = 0;
    int a[4] = {2, 4, 5, 8};
    int b[4] = {1, 0, 4, 6};
    new_sum(a, b, c, 4);
    for (i = 0; i < 4;i++)
        printf("%d ", c[i]);
    return 0;
}