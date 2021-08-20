#include <stdio.h>
#include <assert.h>
#define N 40
int Average(int score[], int n);
int Readscore(int score[]);
int main(void)
{
    int score[N], aver, n;
    n = Readscore(score);
    aver = Average(score, n);
    printf("Average score  is %d\n",aver);
    return 0;
}
int Average(int score[], int n)
{
    int i;
    double sum = 0;
    for (i = 0; i < n;i++)
    {
        sum += score[i];
    }
    return n > 0 ? sum / n : -1;
}
int Readscore(int score[])
{
    int i=-1;
    do{
        i++;
        printf("input the score:");
        scanf("%d", &score[i]);
    } while (score[i] >= 0);
    return i;
}