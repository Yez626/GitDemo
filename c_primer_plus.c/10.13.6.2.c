#include <stdio.h>
void invert(double *p,int n)
{
    double temp;
    int i,j;
    for (i = 0; i < n - 1;i++)
    {
        for (j = i; j < n;j++)
        {
            if (*(p+i)<=*(p+j))
            {
                temp = *(p + j);
                *(p + j) = *(p + i);
                *(p + i) = temp;
            }
        }
    }    
}
int main()
{
    int i;
    double a[4] = {1, 2, 3, 4};
    invert(a, 4);
    for (i = 0; i < 4;i++)
        printf("%f", a[i]);
    return 0;
}