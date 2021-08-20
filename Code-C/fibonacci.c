#include <stdio.h>
#define YEAR 12
int main(void)
{
    int f1[YEAR + 1] = {0, 1, 1};
    int f2[YEAR + 1] = {0, 0, 1};
    int month;
    for (month = 3; month <= YEAR;month++)
    {
        f1[month] = f1[month - 1] + f1[month - 2];
        f2[month] = f2[month - 1] + f2[month - 2];
    }
    for (month = 1; month <= YEAR;month++)
    {
        printf("%d\t", f1[month]);
    }
    printf("\n") 
    for (month = 1; month <= YEAR;month++)
    {
        printf("%d\t", f2[month]);
    }
    printf("\n");
    printf("sum=%d\n", f1[YEAR] + f2[YEAR]);
    return 0;
}