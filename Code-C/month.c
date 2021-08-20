#include <stdio.h>
#define Months 12
int main()
{
    int days[Months] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    do{
        printf("input a month:");
        scanf("%d", &month);
    } while (month <1 || month > 12);
    printf("the number of days is %d\n", days[month - 1]);
    return 0;
}  