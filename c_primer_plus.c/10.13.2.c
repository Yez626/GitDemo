#include <stdio.h>
void cpp_arr(double t[],double b[], int n);
void cpp_ptr(double *t,double *s, int n);
void cpp_ptrs(double *t,double *s_first, double *s_last);
int main()
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    cpp_arr(target1, source, 5);
    cpp_ptr(target2, source, 5);
    cpp_ptrs(target3, source, source + 5);
}
void cpp_arr(double t[],double b[], int n)
{
    int i;
    for (i = 0; i < n;i++)
    {
        t[i] = b[i];
    }
}
void cpp_ptr(double *t,double *s, int n)
{
    int i;
    for (i = 0; i < n;i++)
    {
        *(t + i) = *(s + i);
    }
}
void cpp_ptrs(double *t,double *s_first, double *s_last)
{
    int i;
    for (i = 0; *(s_first + i) < *s_last;i++)
        *(t + i)= *(s_first + i);
}