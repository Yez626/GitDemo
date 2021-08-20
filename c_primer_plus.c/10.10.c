#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answear;
    answear = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answear);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
    return 0;
}
int sum(int ar[],int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n;i++)
        total += ar[i];
    printf("the size of ar is  %zd bytes", sizeof ar);
    return total;
}