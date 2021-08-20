#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
void to_base_n(int n, int x) /* 递归函数 */
{
    int r;
    r = n % x;
    if ( x<10 && x>1 && n<10 && n>1)
        to_base_n(n / x, x);
    printf("%d", r);
    return;
}
 
int main(void)
{
    int n;
    int x;
    scanf("%d,%d", &n, &x);
    to_base_n(n, x);
    return 0;
}
