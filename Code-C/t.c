#include <stdio.h>
#define MAX(A,B) A>B?A:B
int main(void)
{
    printf("%d", MAX(MAX(2, 1), 3));
    return 0;
}