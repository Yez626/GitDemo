#include <stdio.h>
#define ARR_SIZE 40
int main(void)
{
    float score[ARR_SIZE], temp1;
    int n, i, j;
    long num[ARR_SIZE];
    long temp2;


    printf("please enter the number of total student:");
    scanf("%d", &n);
    printf("please enter the number and score:\n");
    for (i = 0; i <= n;i++)
    {
        scanf("%ld%f", &num[i], &score[i]);
    }
    for (i = 0; i < n-1;i++)
    {
        for (j=i+1; j < n;j++)
        {
            if (score[j] > score[i])
            {
                temp1 = score[j];
                score[j] = score[i];
                score[i] = temp1;
                temp2 = num[j];
                num[j] = num[i];
                num[i] = temp2;
            }
        }
    }
    printf("sorted results:\n");
    for (i = 0; i < n;i++)
    {
        printf("%ld\t%4.0f\n", num[i], score[i]);
    }
        return 0;
}