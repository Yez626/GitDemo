#include <stdio.h>
void cpp_arr(double *p,double *t,int m,int n)
{
    int i, j;
    for (i = 0; i < m - 1;i++)
    {        
        for (j = 0; j < n - 1;j++)
        {
            *(*(p + i) + j) = *(*(t + i) + j);
        }
    }
}
