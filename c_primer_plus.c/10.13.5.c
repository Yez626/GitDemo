#include <stdio.h>
int diff(double *m,int n)
{
    int i;
    int max, min;
    int answer;
    max = *m;
    min = *m;
    for (i = 0; i < n;i++)
        if (*m<*(m+i))
            max = *(m + i);
        if (*m>*(m+i))
            min = *(m + i);
        answer = max - min;
    return answer;
}